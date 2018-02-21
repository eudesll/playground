#game.rb
class Game
  attr_reader :name

  def initialize(name, &block)
    @name = name
    @year = nil
    @system = nil
  end

  # Add methods to store year and system
  def year(year)
    @year = year
  end
  
  def system(system)
    @system = system
  end
end

#game_dsl.rb
LIBRARY = Library.new

def add_game(name, &block)
  game = Game.new(name)
  # Capture the block and call it here
  game.instance_eval(&block)
  LIBRARY.add_game(game)
end
