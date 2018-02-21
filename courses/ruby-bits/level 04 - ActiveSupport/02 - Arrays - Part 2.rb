def first_games(games, index)
  games.to(index)
end
games = ["Super Mario Bros.", "Contra", "Metroid", "Mega Man 2"]
puts first_games(games, 2)
