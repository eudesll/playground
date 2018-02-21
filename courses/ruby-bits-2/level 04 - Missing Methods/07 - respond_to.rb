class Library
  SYSTEMS = ['arcade', 'atari', 'pc']

  attr_accessor :games

  def method_missing(name, *args)
    system = name.to_s
    if SYSTEMS.include?(system)
      self.class.class_eval do
        define_method(system) do
          find_by_system(system)
        end
      end
      send(system)
    else
      super
    end
  end
    
    def respond_to?(method)
    SYSTEMS.include?(method.to_s) || super
  end

  private

  def find_by_system(system)
    games.select { |game| game.system == system }
  end
end
