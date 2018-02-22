TwitterForZombies::Application.routes.draw do
  get '/undead' => redirect('/zombies')
end
