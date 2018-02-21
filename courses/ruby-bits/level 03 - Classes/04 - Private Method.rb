class Library
  attr_accessor :games

  def initialize(games)
    self.games = games
  end

  def has_game?(search_game)
    for game in games
      return true if game == search_game
    end
    false
  end

  def add_game(game)
    games << game
    log(game.name)
  end
  
  private
  
  def log(string)
    puts string
  end
end
