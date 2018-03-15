# 01 - DYNAMIC FINDERS I
Zombie.where(weapon: 'Chainsaw')

# 02 - FIND_BY I
Zombie.find_by(name: 'Ash')

# 03 - FIND_BY II
Zombie.find_by(name: 'Ash', weapon: 'Chainsaw')

# 04 - FIND_OR_CREATE_BY
class MostWantedController < ApplicationController
  def create
    @zombie = Zombie.find_or_create_by(name: params[:name])
    redirect_to @zombie
  end
end

# 05 - UPDATE
@zombie.update(@zombie_params)

# 06 - MODEL.ALL
class MostWantedController < ApplicationController
  def index
    @zombies = Zombie.all
    if params[:outlaws]
      @zombies = @zombies.outlaws
    end
  end
end

