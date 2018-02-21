class Library
  include Enumerable
  attr_accessor :games

  def initialize(games = [])
    self.games = games
  end

  def each
    games.each do |game|
      yield game
    end
  end
end
