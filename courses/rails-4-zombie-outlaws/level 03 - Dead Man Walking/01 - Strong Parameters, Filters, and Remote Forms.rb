# 01 - STRONG PARAMETERS
# 02 - STRONG PARAMETERS II
class ZombiesController < ApplicationController
  before_action :set_zombie, only: [:show, :edit, :update, :destroy]

  def show
  end

  def new
    @zombie = Zombie.new
  end

  def edit
  end

  def create
    @zombie = Zombie.new(zombie_params)
    if @zombie.save
      redirect_to @zombie, notice: 'Created.'
    else
      render action: 'new'
    end
  end

  def update
    if @zombie.update(zombie_params)
      redirect_to @zombie, notice: 'Updated.'
    else
      render action: 'edit'
    end
  end

  private
	
  def zombie_params
    params.require(:zombie).permit(:name, :most_wanted)
  end
  def set_zombie
    @zombie = Zombie.find(params[:id])
  end
end

# 03 - AUTHENTICITY TOKENS
module ZombieOutlaws
  class Application < Rails::Application
    config.time_zone = 'Central Time (US & Canada)'
    config.action_view.embed_authenticity_token_in_remote_forms = true
  end
end