class Zombie < ActiveRecord::Base
  validates :name, presence: true, uniqueness: true
end
