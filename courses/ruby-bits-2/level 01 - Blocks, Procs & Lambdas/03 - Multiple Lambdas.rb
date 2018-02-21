#library.rb
class Library
  attr_accessor :games

  def initialize(games)
    @games = games
  end

  def exec_game(name, action, error)
    game = games.detect { |game| game.name == name }
    begin
      action.call(game)
    rescue
      error.call
    end
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
