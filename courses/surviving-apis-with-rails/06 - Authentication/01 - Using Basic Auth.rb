# 01 - INTEGRATION TESTING BASIC AUTH
class ListingZombiesTest < ActionDispatch::IntegrationTest
  setup { @user = User.create!(username: 'foo', password: 'secret') }

  test 'valid authentication lists zombies' do
    get '/zombies', {}, { 'Authorization' => encode_credentials(@user.username, @user.password) }
    assert_equal 200, response.status
    assert_equal Mime::JSON, response.content_type
  end
end

# 02 - TESTING INVALID AUTHENTICATION
class ListingZombiesTest < ActionDispatch::IntegrationTest
  test 'invalid authentication responds with proper status code' do
    get '/zombies', {}, { 'Authorization' => '' }
    assert_equal 401, response.status
  end
end

# 03 - IMPLEMENTING BASIC AUTH
class ApplicationController < ActionController::Base

  before_action :authenticate

  protected
    def authenticate
      authenticate_basic_auth
    end

    def authenticate_basic_auth
      authenticate_with_http_basic do |username, password|
        User.authenticate(username, password)
      end
    end
end

# 04 - CUSTOM BASIC AUTH RESPONSE
class ApplicationController < ActionController::Base

  before_action :authenticate

  protected
    def authenticate
      authenticate_basic_auth || render_unauthorized
    end

    def authenticate_basic_auth
      authenticate_with_http_basic do |username, password|
        User.authenticate(username, password)
      end
    end

    def render_unauthorized
      self.headers['WWW-Authenticate'] = 'Basic realm="Zombies"'
      
      respond_to do |format|
        format.json { render json: 'Bad credentials', status: 401 }
        format.xml { render xml: 'Bad credentials', status: 401 }
      end
    end
end

# 05 - CURL WITH BASIC AUTH
curl -H "Accept: application/json" -u 'foo:secret' http://cs-zombies-dev.com:3000/zombies