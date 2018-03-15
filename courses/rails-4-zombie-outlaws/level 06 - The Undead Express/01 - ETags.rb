# 01 - FRESH_WHEN
class MostWantedController < ApplicationController
  def show
    @zombie = Zombie.most_wanted
    fresh_when(@zombie)
  end
end

# 02 - DECLARATIVE ETAGS I
class MostWantedController < ApplicationController
  etag { current_user.country }
  
  def show
    @zombie = Zombie.most_wanted
    fresh_when(@zombie)
  end

  def edit
    @zombie = Zombie.most_wanted
    fresh_when(@zombie)
  end
end

# 03 - DECLARATIVE ETAGS II
class MostWantedController < ApplicationController

  etag { current_user.country }
  etag { current_user.city }

  def show
    @zombie = Zombie.most_wanted
    fresh_when(@zombie)
  end

  def edit
    @zombie = Zombie.most_wanted
    fresh_when(@zombie)
  end
end
