def describe_favorites(*games)
  for game in games
    puts "Favorite Game: #{game}"
  end  
end
describe_favorites('Mario', 'Contra', 'Metroid')
