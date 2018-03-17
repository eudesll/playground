# 01 - TESTING ROUTES FOR HEADER VERSIONING
class ListingZombiesTest < ActionDispatch::IntegrationTest
  test 'show zombie from API version 1' do
    get '/zombies/1', {}, { 'Accept' => 'application/vnd.zombies.v1+json' }
    assert_equal 200, response.status
    assert_equal Mime::JSON, response.content_type
    assert_equal 'This is version one', json(response.body)[:message]
  end
end

# 02 - API VERSION ROUTE CONSTRAINT
class ApiVersion

  def initialize(version, default_version=false) # Task 1
    @version, @default_version = version, default_version
  end

  def matches?(request)
    @default_version || check_headers(request.headers)
  end

  private
    def check_headers(headers)
      accept = headers['Accept']
      return accept && accept.include?("application/vnd.zombies.#{@version}+json")
    end
end

# 03 - ROUTE VERSION CONSTRAINT
require 'api_version'

SurvivingRails::Application.routes.draw do
  scope defaults: { format: 'json' } do
    scope module: :v1, constraints: ApiVersion.new('v1') do # Task 2
      resources :zombies
    end
    scope module: :v2, constraints: ApiVersion.new('v2', true) do # Task 3
      resources :zombies
    end
  end
end

# 04 - DEFAULT VERSION TEST
class RoutesTest < ActionDispatch::IntegrationTest
  test 'defaults to v2' do
    assert_generates '/zombies', # Task 1
    	{ controller: 'v2/zombies', action: 'index' } # Task 2
  end
end
