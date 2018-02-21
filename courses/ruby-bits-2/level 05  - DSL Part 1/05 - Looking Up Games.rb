LIBRARY = Library.new

def add_game(name, &block)
  game = Game.new(name)
  game.instance_eval(&block)
  LIBRARY.add_game(game)
end

# Implement the with_game method here
def with_game(name, &block)
  game = LIBRARY.find_by_name(name)
  game.instance_eval(&block)
end