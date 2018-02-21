library = Library.new(GAMES)
list_method = library.method(:list)
emulate_method = library.method(:emulate)
list_method.call
emulate_method.call("Contra")
