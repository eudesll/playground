# 01 - INTEGRATION TESTS FOR POST
class CreatingHumansTest < ActionDispatch::IntegrationTest
  test 'creates human' do
    post '/humans',
    	{ human: { name: 'John', brain_type: 'small' } }.to_json,
    	{ 'Accept' => Mime::JSON, 'Content-Type' => Mime::JSON.to_s }
    
    assert_equal 201, response.status
  end
end

# 02 - BETTER ASSERTIONS
class CreatingHumansTest < ActionDispatch::IntegrationTest
  test 'creates human' do
    post '/humans', { human: { name: 'John', brain_type: 'small' } }.to_json,
      { 'Accept' => Mime::JSON, 'Content-Type' => Mime::JSON.to_s }

    assert_equal 201, response.status
    assert_equal Mime::JSON, response.content_type
    
    human = json(response.body)
    assert_equal human_url(human[:id]), response.location
  end
end

# 03 - RESPONDING TO A SUCCESSFUL POST REQUEST
class HumansController < ApplicationController
  def create
    human = Human.create(human_params)
    
    if human.save
      render json: human, status: :created, location: human
    end
  end

  private

  def human_params
    params.require(:human).permit(:name, :brain_type)
  end
end

# 04 - FORGERY PROTECTION
class ApplicationController < ActionController::Base
  protect_from_forgery with: :null_session
end

# 05 - POSTING DATA WITH CURL
curl -i -X POST -d 'human[name]=Ash' http://cs-zombies-dev.com:3000/humans

# 06 - POST METHOD
class HumansController < ApplicationController
  protect_from_forgery with: :null_session

  def create
    human = Human.new(human_params)

    if human.save
      render nothing: true, status: 204, location: human
    end
  end

  private

  def human_params
    params.require(:human).permit(:name, :brain_type)
  end
end

# 07 - USING HEAD FOR HEADERS-ONLY RESPONSE
class HumansController < ApplicationController
  protect_from_forgery with: :null_session

  def create
    human = Human.new(human_params)

    if human.save
      head 204, location: human
    end
  end

  private

  def human_params
    params.require(:human).permit(:name, :brain_type)
  end
end

# 08 - TESTING UNSUCCESSFUL POST REQUESTS
class CreatingHumansTest < ActionDispatch::IntegrationTest
  test 'does not create human with name nil' do
    post '/humans',
      { human:
        { name: nil, brain_type: 'large' }
      }.to_json,
      { 'Accept' => Mime::JSON, 'Content-Type' => Mime::JSON.to_s }
		
    assert_equal 422, response.status
    assert_equal Mime::JSON, response.content_type
  end
end

# 09 - RESPONDING TO UNSUCCESSFUL POST REQUESTS
class HumansController < ApplicationController
  def create
    human = Human.new(human_params)

    if human.save
      head 204, location: human
    else
      render json: human.errors, status: 422
    end
  end

  private

  def human_params
    params.require(:human).permit(:name, :brain_type)
  end
end
