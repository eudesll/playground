class ZombiesController < ApplicationController
  def show
    @zombie = Zombie.find(params[:id])
  end
end
