class ArcadeGame < Game
  attr_accessor :weight
  
  def initialize(name, options = {})
    super(name, year: options[:year], system: options[:system])
    self.weight = options[:weight]
  end
end
class ConsoleGame < Game
end
