class Game
  SYSTEMS = ['SNES', 'PS1', 'Genesis']

  attr_accessor :name, :year, :system
  
  SYSTEMS.each do |system|
    define_method "runs_on_#{system.downcase}?" do
      self.system == system
    end
  end
end
