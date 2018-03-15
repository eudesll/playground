# 01 - CONTROLLER ACTIONS
class RewardsController < ApplicationController
  before_action :set_reward, only: [:edit, :update]
  
  def index
    @rewards = Reward.all
  end

  def new
    @reward = Reward.new
  end

  def edit
  end

  def create
    @reward = Reward.new(reward_params)

    if @reward.save
      redirect_to @reward, notice: 'Created.'
    else
      render action: 'new'
    end
  end

  def update
    if @reward.update(reward_params)
      redirect_to @reward, notice: 'Updated.'
    else
      render action: 'edit'
    end
  end

  private

  def set_reward
    @reward = Reward.find(params[:id])
  end

  def reward_params
    params.require(:reward).permit(:amount)
  end
end

# 02 - CUSTOM FLASH TYPES
class ZombiesController < ApplicationController
  before_action :set_zombie, only: [:show, :edit, :update, :destroy]
  add_flash_types :groan
  
  def show
  end

  def edit
  end

  def update
    if @zombie.update(zombie_params)
      redirect_to @zombie, groan: @zombie.groan
    else
      render action: 'edit'
    end
  end

  private
  def set_zombie
    @zombie = Zombie.find(params[:id])
  end

  def zombie_params
    params.require(:zombie).permit(:name, :most_wanted)
  end
end

# 03 - CUSTOM FLASH TYPES II
<p id="groan"><%= groan %></p>
<p>
  <strong>Name:</strong>
  <%= @zombie.name %>
</p>

<%= link_to 'Edit', edit_zombie_path(@zombie) %> |
<%= link_to 'Back', zombies_path %>
