# 01 - CREATING A VERSIONED NAMESPACE
SurvivingRails::Application.routes.draw do
  namespace :v1 do
  	resources :zombies
  end
  
  namespace :v2 do
    resources :zombies, except: :destroy
  end
end

# 02 - TESTING ROUTES FOR URI VERSIONING
class RoutesTest < ActionDispatch::IntegrationTest
  test 'routes to proper versions' do
    assert_generates '/v1/zombies', { controller: 'v1/zombies', action: 'index' }
    assert_generates '/v2/zombies', { controller: 'v2/zombies', action: 'index' }
  end
end

# 03 - RENDERING ZOMBIES
module V1
  class ZombiesController < ApplicationController
    def index
      render json: Zombie.all, status: 200
    end
  end
end

# 04 - TESTING SETTING THE REMOTE_ADDR HEADER
class ZombiesWithIpTest < ActionDispatch::IntegrationTest
  setup { @ip = '192.168.1.12' }

  test '/v1 returns ip and v1' do
    get '/v1/zombies', {}, { 'REMOTE_ADDR' => @ip }
    assert_equal 200, response.status
    assert_equal "#{@ip} and version one", response.body
  end

  test '/v2 returns ip and v2' do
    get '/v2/zombies', {}, { 'REMOTE_ADDR' => @ip }
    assert_equal 200, response.status
    assert_equal "#{@ip} and version two", response.body
  end
end

# 05 - USING BEFORE_ACTION TO SET THE IP
# application_controller
class ApplicationController < ActionController::Base
  before_action -> { @user_ip = request.headers['REMOTE_ADDR'] }
end

# v1/zombies_controller
module V1
  class ZombiesController < ApplicationController
    def index
      render json: "#{@user_ip} and version one", status: 200
    end
  end
end

# v2/zombies_controller
module V2
  class ZombiesController < ApplicationController
    def index
      render json: "#{@user_ip} and version two", status: 200
    end
  end
end

# 06 - EXTRACTING DUPLICATE CODE
module V2
  class VersionController < ApplicationController
    abstract!
    
    before_action -> { log_survival_request }
  end
end
