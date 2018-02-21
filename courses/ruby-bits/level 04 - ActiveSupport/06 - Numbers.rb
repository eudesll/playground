def describe_count(games)
  return "You have no games" if games.empty?  
  return "You have an even number of games" if games.length.even?
  return "You have an odd number of games" if games.length.odd?
end

games = ["Super Mario Bros.", "Contra", "Metroid", "Mega Man 2"]
puts describe_count(games)
