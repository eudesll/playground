def new_game(name, options = {})
  {
    name: name,
    year: options[:year],
    system: options[:system]
  }
end
game = new_game("Street Figher II", { system: "SNES", year: 1992 })
