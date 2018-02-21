add_game("Civilization", "PC", 1991) { strategy turn_based }
add_game("Contra", "NES", 1987) { strategy turn_based }
add_game("The Legend of Zelda", "NES", 1986) { action rpg }
add_game("Mega Man X2", "SNES", 1995) { action }
add_game("Super Metroid", "SNES", 1994) { adventure platformer }
add_game("Sim City 2000", "PC", 1993) { strategy simulation }
add_game("Starcraft", "PC", 1998) { realtime strategy }

with_games_tagged "action" do
  print_details
end

with_game "Contra", "Sim City 2000" do
  capture_screenshot
end

with_game "Starcraft" do
  play
end