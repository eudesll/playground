class Library
  def initialize(console)
    @manager = console
  end

  def method_missing(name, *args)
    if name =~ /atari/i
      @manager.send(name, *args)
    else
      super
    end
  end
end
