# 01 - SCOPES
class Zombie < ActiveRecord::Base
  scope :recent, -> { where('killed_on > ?', 2.days.ago) }
  scope :outlaws, -> { where(status: 'outlaw') }
end

# 02 - MODEL.NONE
class Deputy < ActiveRecord::Base
  def self.zombie_counterforce
    if Zombie.at_large_count.zero?
      Deputy.none
    else
      Deputy.where(status: 'available')
    end
  end
end

# 03 - RELATION#NOT
Zombie.where.not(status: 'outlaw')

# 04 - RELATION#ORDER
Zombie.order(name: :desc, killed_on: :desc)

# 05 - RELATION#REFERENCES I
Weapon.includes(:zombies)
  .where("zombies.name = 'Ash'").references(:zombies)

# 06 - RELATION#REFERENCES II
Weapon.includes(:zombies).where(zombies: { name: 'Ash' })