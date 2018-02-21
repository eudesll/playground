def search_index(games, search_term)
  games.find_index(search_term) || "Not Found"
end
