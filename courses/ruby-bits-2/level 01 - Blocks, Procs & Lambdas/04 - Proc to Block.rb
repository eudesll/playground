#main.rb
library = Library.new(GAMES)
proc = Proc.new { |game| puts "#{game.name} (#{game.system}) - #{game.year}" }
library.each(&proc)

#game.rb
class Game 
  attr_accessor :name

  def initialize(name, options)
    @name = name
    @year = options[:year]
    @system = options[:system]
  end
end
