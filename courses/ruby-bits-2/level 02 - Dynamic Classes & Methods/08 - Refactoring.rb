class Library
  attr_accessor :games
  
  methods = [:each, :map, :select]
  methods.each do |method|
    define_method method do |&block|
      games.send(method, &block)
    end
  end
end
