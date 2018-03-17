# 01 - INTEGRATION INTRO
class ListingHumansTest < ActionDispatch::IntegrationTest
  setup { host! 'api.example.com' }

  test 'returns a list of humans' do
    get '/humans'
    assert_equal 200, response.status
    refute_empty response.body
  end
end

# 02 - LISTING RESOURCES
module API
  class HumansController < ApplicationController
    def index
      humans = Human.all

      render json: humans, status: :ok
    end
  end
end

# 03 - TEST LISTING RESOURCES WITH QUERY STRINGS
class ListingHumansTest < ActionDispatch::IntegrationTest
  setup { host! 'api.example.com' }

  test 'returns a list of humans by brain type' do
    allan = Human.create!(name: 'Allan', brain_type: 'large')
    john = Human.create!(name: 'John', brain_type: 'small')
    
    get '/humans?brain_type=small'
    assert_equal 200, response.status
    
    humans = JSON.parse(response.body, symbolize_names: true)
    names = humans.collect { |h| h[:name] }
    assert_includes names, 'John'
    refute_includes names, 'Allan'
  end
end

# 04 - RESOURCES WITH FILTER
module API
  class HumansController < ApplicationController
    def index
      humans = Human.all

      if params[:brain_type]
        humans = humans.where(brain_type: params[:brain_type])
      end
      
      render json: humans, status: :ok
    end
  end
end

# 05 - TEST RETRIEVING DATA FOR ONE HUMAN
class ListingHumansTest < ActionDispatch::IntegrationTest
  setup { host! 'api.example.com' }

  test 'returns human by id' do
    human = Human.create!(name: 'Ash')
    
    get "/humans/#{human.id}"
    assert_equal 200, response.status
    
    human_response = json(response.body)
    assert_equal human.name, human_response[:name]    
  end
end

# 06 - RETURNING ONE HUMAN
module API
  class HumansController < ApplicationController
    def show
      render json: Human.find(params[:id]), status: :ok
    end
  end
end

# 07 - USING CURL TO ISSUE NETWORK REQUESTS
curl http://cs-zombies-dev.com:3000/humans

# 08 - CURL WITH QUERY STRINGS
curl http://cs-zombies-dev.com:3000/humans?brain_type=large

# 09 - DISPLAYING RESPONSE HEADERS
curl -I http://cs-zombies-dev.com:3000/humans