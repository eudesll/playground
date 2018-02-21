#library.rb
class Library
  attr_accessor :games

  def initialize(games)
    self.games = games
  end

  def list
    puts games.join("\n")
  end

  def emulate(name)
    game = find(name)
    puts "Starting emulator for #{game}..."
  end
	
  protected
  
  def find(name)
    games.detect { |game| game.name == name }
  end
end

#main.rb
library = Library.new(GAMES)
library.public_send(:list)
library.public_send(:emulate, "Contra")
game = library.public_send(:find, "Contra")
