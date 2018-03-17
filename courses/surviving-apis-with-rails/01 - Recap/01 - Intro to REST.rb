# 01 - LIMITING RESOURCES
SurvivingRails::Application.routes.draw do
  resources :humans, except: :destroy
  resources :weapons, only: [:index, :show]
end

# 02 - RESTRICTING MULTIPLE ACTIONS
SurvivingRails::Application.routes.draw do
  with_options only: :index do |opt|
    opt.resources :zombies
    opt.resources :humans
    opt.resources :medical_kits
    opt.resources :broadcasts
  end
  
  resources :messages, except: :destroy
end

# 03 - CONSTRAINTS AND NAMESPACES
SurvivingRails::Application.routes.draw do
  resources :announcements
  
  namespace :api, path: '/', constraints: { subdomain: 'api' } do
    resources :zombies
    resources :humans
  end
end
