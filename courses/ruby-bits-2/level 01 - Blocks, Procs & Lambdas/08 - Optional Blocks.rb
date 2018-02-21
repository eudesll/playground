#library.rb
class Library
  attr_accessor :games

  def initialize(games)
    @games = games
  end

  def list
    games.each do |game|
      puts yield game if block_given?
      puts game.name unless block_given?
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
