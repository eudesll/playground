search ||= ""
games = ["Super Mario Bros.", "Contra", "Metroid", "Mega Man 2"]
matched_games = games.grep(Regexp.new(search))
puts "Found the following games..."
matched_games.each do |game|
  puts "- #{game}"
end
