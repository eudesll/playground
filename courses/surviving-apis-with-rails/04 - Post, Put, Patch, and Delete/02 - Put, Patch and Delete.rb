# 01 - INTEGRATION TESTS WITH PATCH
class UpdatingHumansTest < ActionDispatch::IntegrationTest
  setup { @human = Human.create!(name: 'Robert', brain_type: 'small') }

  test 'successful update' do
    patch "/humans/#{@human.id}",
      { human: { name: 'Ash', brain_type: 'large' } }.to_json,
      { 'Accept' => Mime::JSON, 'Content-Type' => Mime::JSON.to_s }

    assert_equal 200, response.status
    assert_equal 'Ash', @human.reload.name
  end
end

# 02 - SUCCESSFUL UPDATES WITH PATCH
class HumansController < ApplicationController
  def update
    human = Human.find(params[:id])

    if human.update(human_params)
      render json: human, status: :ok
    end
  end

  private

  def human_params
    params.require(:human).permit(:name, :brain_type)
  end
end

# 03 - UNSUCCESSFUL UPDATES WITH PATCH
class UpdatingHumansTest < ActionDispatch::IntegrationTest
  setup { @human = Human.create!(name: 'Robert', brain_type: 'small') }

  test 'unsuccessful update on bad name' do
    patch "/humans/#{@human.id}",
      { human: { name: nil } }.to_json,
      { 'Accept' => Mime::JSON, 'Content-Type' => Mime::JSON.to_s }
    
    assert_equal 422, response.status
  end
end

# 04 - RESPONDING TO UNSUCCESSFUL UPDATES
class HumansController < ApplicationController
  def update
    human = Human.find(params[:id])

    if human.update(human_params)
      render json: human, status: 200
    else
      render json: human.errors, status: 422
    end
  end

  private

  def human_params
    params.require(:human).permit(:name, :brain_type)
  end
end

# 05 - INTEGRATION TESTS WITH DELETE
class DeletingZombiesTest < ActionDispatch::IntegrationTest
  setup { @zombie = Zombie.create!(name: 'Undead Jack', brain_type: 'large') }

  test 'deletes existing zombie' do
    delete "/zombies/#{@zombie.id}"
    assert_equal 204, response.status
  end
end

# 06 - RESPONDING TO DELETE BY DESTROYING RECORDS
class ZombiesController < ApplicationController
  def destroy
    zombie = Zombie.find(params[:id])

    zombie.destroy
    head 204
  end
end

# 07 - RESPONDING TO DELETE BY ARCHIVING RECORDS
class Zombie < ActiveRecord::Base
  def archive
    self.available = false
    self.save
  end
  
  def self.find_available(id)
    find_by!(id: id, available: true)
  end
end

# 08 - RESPONDING TO DELETE METHODS BY ARCHIVING RECORD
class ZombiesController < ApplicationController
  def show
    zombie = Zombie.find_available(params[:id])
    render json: zombie, status: 200
  end

  def destroy
    zombie = Zombie.find_available(params[:id])
    zombie.archive
    head 204
  end
end
