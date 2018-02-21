#library.rb
class Library
  attr_accessor :games

  def initialize(games)
    @games = games
  end

  def names
    games.map(&:name)
  end
end

#game.rb
class Game 
  attr_accessor :name

  def initialize(name, options)
    @name = name
    @year = options[:year]
    @system = options[:system]
  end
end
