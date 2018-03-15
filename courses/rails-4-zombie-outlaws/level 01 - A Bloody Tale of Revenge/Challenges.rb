# 01 - MATCH I
ZombieOutlaws::Application.routes.draw do
  post '/create_outlaws', to: 'zombies#create'
end

# 02 - MATCH II
ZombieOutlaws::Application.routes.draw do
  match '/outlaws', to: 'zombies#outlaws', via: :get
end

# 03 - MATCH III
ZombieOutlaws::Application.routes.draw do
  match '/undeads', to: 'undeads#index', via: :all
end

# 04 - HTTP PATCH
class WeaponsControllerTest < ActionController::TestCase
  test "updates weapon" do
    patch :update, zombie_id: @zombie, weapons: { name: 'Scythe' }
    assert_redirected_to zombie_url(@zombie)
  end
end

# 05 - ROUTING CONCERNS I
ZombieOutlaws::Application.routes.draw do
  concern :defensible do
    resources :shotguns
    resources :rifles
    resources :knives
  end
  
  resources :sheriffs, concerns: :defensible
  resources :gunslingers, concerns: :defensible
  resources :preachers, concerns: :defensible
end

# 06 - ROUTING CONCERNS - PART II
ZombieOutlaws::Application.routes.draw do
  concern :defensible do |options|
    resources :shotguns, options
    resources :rifles, options
    resources :knives, options
  end

  resources :sheriffs, concerns: :defensible
  resources :gunslingers, concerns: :defensible
  resources :preachers do
    concerns :defensible, except: :destroy
  end
end

# 07 - THREAD SAFETY
ZombieOutlaws::Application.configure do
  # config.threadsafe!
  config.cache_classes = true
  config.eager_load = true
end
