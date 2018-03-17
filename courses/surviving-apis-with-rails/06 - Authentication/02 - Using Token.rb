# 01 - INTEGRATION TESTING TOKEN AUTH
class ListingZombiesTest < ActionDispatch::IntegrationTest
  setup { @user = User.create! }

  test 'valid token lists zombies' do
    get '/zombies', {}, { 'Authorization' => token_header(@user.auth_token) }
    assert_equal 200, response.status
    assert_equal Mime::JSON, response.content_type
  end
end

# 02 - GENERATING AUTH TOKEN
class User < ActiveRecord::Base
  before_create :set_auth_token

  private

    def set_auth_token
      return if self.auth_token
      self.auth_token = TokenGenerator.create
    end
end

# 03 - IMPLEMENTING TOKEN BASED AUTH
class ApplicationController < ActionController::Base
  before_action :authenticate

  protected
    def authenticate
      authenticate_token
    end

    def authenticate_token
      authenticate_with_http_token do |token, options|
        User.find_by(auth_token: token)
      end
    end
end

# 04 - CUSTOM TOKEN RESPONSE
class ApplicationController < ActionController::Base
  before_action :authenticate

  protected
    def authenticate
      authenticate_token || render_unauthorized
    end

    def authenticate_token
      authenticate_with_http_token do |token|
        User.find_by(auth_token: token)
      end
    end

    def render_unauthorized
      self.headers['WWW-Authenticate'] = 'Token realm="Zombies"'
      
      respond_to do |format|
        format.json { render json: 'Bad credentials', status: 401 }
        format.xml { render xml: 'Bad credentials', status: 401 }
      end
    end
end

# 05 - CURL AND TOKEN BASED AUTH
curl -H 'Authorization: Token token=a45fb396579a25458d23208560742610' -H 'Accept: application/json' http://cs-zombies-dev.com:3000/zombies