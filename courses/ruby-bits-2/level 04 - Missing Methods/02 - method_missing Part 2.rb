class Library
  def method_missing(name, *args)
    puts name, args
  end
end
