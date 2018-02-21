class Library
  def method_missing(method_name, *args)
    puts method_name
  end
end
