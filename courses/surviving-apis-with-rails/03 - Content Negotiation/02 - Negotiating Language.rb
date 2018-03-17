# 01 - TESTING WITH THE LANGUAGE SET TO ENGLISH
class ChangingLocalesTest < ActionDispatch::IntegrationTest
  test 'returns list of humans in English' do
    get '/humans', {}, {'Accept-Language' => 'en', 'Accept' => Mime::JSON}
    assert_equal 200, response.status
    
    human = json(response.body).first
    assert_equal "My name is #{human[:name]} and I am alive!", human[:message]
  end
end

# 02 - SETTING THE LANGUAGE FOR THE RESPONSE
class ApplicationController < ActionController::Base
  protect_from_forgery with: :exception
  before_action :set_locale
  
  protected
  
  def set_locale
    I18n.locale = request.headers['Accept-Language']
  end
end

# 03 - USING JBUILDER TO RETURN LOCALIZED JSON
json.array(@humans) do |human|
  json.extract! human, :id, :name, :brain_type
  json.message I18n.t('human_message', name: human.name)
end

# 04 - USING LOCALE TEMPLATES
en:
  human_message: 'My name is %{name} and I am still alive!'
