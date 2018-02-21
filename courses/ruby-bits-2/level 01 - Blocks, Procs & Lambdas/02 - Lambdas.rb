#main.rb
library = Library.new(GAMES)
print_details = lambda { |game| puts "#{game.name} (#{game.system}) - #{game.year}" }
library.exec_game('Contra', print_details)

#game.rb
class Game 
  attr_accessor :name

  def initialize(name, options)
    @name = name
    @year = options[:year]
    @system = options[:system]
  end
end
