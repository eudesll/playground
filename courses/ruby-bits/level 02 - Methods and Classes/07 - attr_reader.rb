class Game
  attr_accessor :name, :year, :system
  attr_reader :created_at
  
  def initialize(name, options={})
    @name = name
    @year = options[:year]
    @system = options[:system]
    @created_at = Time.new
  end
end
