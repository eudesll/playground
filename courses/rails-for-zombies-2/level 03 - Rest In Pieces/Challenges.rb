# 01 - ROUTES BE RAKIN
rake routes

# 02 - FORMS
=begin
<h1>New tweet</h1>
<%= form_for @tweet do |t| %>
  <%= t.text_area :status %>
  <%= t.text_field :location %>
  
  <%= t.submit %>
<% end %>
=end

# 03 - INPUTS
=begin
<%= form_for(@weapon) do |f| %>
  <%= f.text_field :name %>
  <%= f.number_field :ammo %>
  <%= f.check_box :is_broken %>
  
  <%= f.submit %>
<% end %>
=end

# 04 - RADIO BUTTON
=begin
<%= form_for(@weapon) do |f| %>
  <%= f.radio_button :condition, 'New', checked: true %>
  <%= f.radio_button :condition, 'Rusty' %>
  <%= f.radio_button :condition, 'Broken' %>
<% end %>
=end

# 05 - SELECT BOX
=begin
<%= form_for(@weapon) do |f| %>
  <%= f.select :condition, ['New', 'Rusty', 'Broken'] %>
<% end %>
=end

# 06 - NESTED ROUTE
RailsForZombies::Application.routes.draw do
  resources :zombies do
    resources :tweets
    resources :weapons
  end
end

# 07 - NESTED PARAMS
class WeaponsController < ApplicationController
  before_filter :get_zombie
  
  def get_zombie
    @zombie = Zombie.find(params[:zombie_id])
  end
  
  def show 
    @weapon = @zombie.weapons.find(params[:id])
  end
end

# 08 - LINK TO
=begin
<h2><%= @zombie.name %>'s weapons</h2>
<ul>
  <% @weapons.each do |w| %>
    <li><%= link_to w.name, [@zombie, w] %></li>
  <% end %>
</ul>

<%= link_to "New Weapon", new_zombie_weapon_path(@zombie) %>
=end

# 09 - NESTED FORM
=begin
<%= form_for([@zombie, @weapon]) do |f| %>
  <%= f.text_field :name %>

  <%= f.submit %>
<% end %>
=end

# 10 - USEFUL VIEW HELPERS
=begin
<h2><%= @zombie.name.titleize %></h2>
<p>Weapons: <%= @zombie.weapon_list.to_sentence %></p>
<p><%= pluralize(@zombie.tweets.size, 'Tweet') %></p>
<p>Money in Pocket <%= number_to_currency @zombie.money %></p>
=end

# 11 - FORM PARTIAL
=begin 
NEW
<h2>New Tweet</h2>

<%= render 'form' %>

<%= link_to 'back', tweets_path %>

FORM
<%= form_for(@tweet) do |f| %> 
  <div class="field">
    <%= f.label :status %><br />
    <%= f.text_area :status %>
  </div>

  <div class="field">
    <%= f.label :location %><br />
    <%= f.text_field :location %>
  </div>

  <%= f.submit %>
<% end %>
=end

# 12 - PARTIAL COLLECTION
=begin
INDEX
<h1><%= @zombie.name %>'s Weapons</h1>
<%= render 'weapon' %>

WEAPON
<% @weapons.each do |weapon| %> 
  <%= div_for weapon do %>
    <h2><%= weapon.name %></h2> 
    <p>
      Condition: <%= weapon.condition %>
      Ammo: <%= weapon.ammo %>
      Purchased <%= time_ago_in_words weapon.purchased_on %> ago
    </p> 
  <% end %>
<% end %>
=end