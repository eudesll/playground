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
end
