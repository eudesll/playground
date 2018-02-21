class Game
  def initialize(name, options={})
    @name = name
    @system = options[:system]
    @year = options[:year]
  end
end
