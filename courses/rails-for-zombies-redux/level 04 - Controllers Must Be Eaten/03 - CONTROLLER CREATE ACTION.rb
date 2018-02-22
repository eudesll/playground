# params = {zombie: {name: 'Gregg', graveyard: 'TBA'}}

class ZombiesController < ApplicationController
  def create
    @zombie = Zombie.create(zombie_params)
    
    redirect_to @zombie
  end

  private

  def zombie_params
    params.require(:zombie).permit(:name, :graveyard)
  end
end
