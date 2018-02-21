library = Library.new(GAMES)
library.send(:list)
library.send(:emulate, "Contra")
game = library.send(:find, "Contra")
