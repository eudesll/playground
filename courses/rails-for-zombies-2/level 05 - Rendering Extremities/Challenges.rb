# 01 - RENDER
class WeaponsController < ApplicationController
  def fire_weapon
    @weapon = Weapon.find(params[:id]) 
    @weapon.fire!

    if @weapon.low_ammo?
      render :fire_and_reload
    end
  end
end

# 02 - CUSTOM RESOURCE ROUTES
RailsForZombies::Application.routes.draw do
  resources :zombies do
    resources :weapons do
      put :toggle_condition, on: :member
      put :reload, on: :member
    end
  end
end

# 03 - RENDER JSON
class WeaponsController < ApplicationController 
  def create
    @weapon = Weapon.new(params[:weapon]) 
    if @weapon.save
      render json: @weapon.to_json, status: :created, location: @weapon
    else
      render json: @weapon.errors, status: :unprocessable_entity
    end
  end 
end

# 04 - RENDER JSON W/OPTIONS
class WeaponsController < ApplicationController
  def reload
    @weapon = Weapon.find(params[:id]) 

    if @weapon.ammo < 30
      @weapon.reload(params[:ammo_to_reload])
      render json: @weapon.to_json(only: :ammo), status: :ok
    else
      render json: @weapon.to_json(only: :ammo), status: :unprocessable_entity
    end
  end
end

# 05 - MORE TO JSON OPTIONS
class WeaponsController < ApplicationController
  def show
    @weapon = Weapon.find(params[:id])
    render json: @weapon.to_json(include: :zombie, except: [:id, :created_at, :updated_at])
  end
end

# 06 - AS JSON
class Zombie < ActiveRecord::Base
  has_many :weapons

  def as_json(options=nil)
    super(options || { include: :weapons, only: [:name, :ammo] })
  end 
end

# 07 - LINK REMOTE
=begin
<ul>
  <li>
    <em>Name:</em> <%= @weapon.name %>
  </li> 
  <li>
    <em>Condition:</em>
    <span id="condition"><%= @weapon.condition %></span>
    <%= link_to "Toggle", toggle_condition_weapon_path(@weapon), remote: true %>
  </li> 
  <li>
    <em>Ammo:</em>
    <span id="ammo"><%= @weapon.ammo %></span>
  </li>
</ul>

<%= form_for @weapon, url: reload_weapon_path(@weapon), remote: true do |f| %>
  <div class="field">
    Number of bullets to reload:
    <%= number_field_tag :ammo_to_reload, 30 %> <br /> <%= f.submit "Reload" %>
  </div>
<% end %>
=end

# 08 - AJAX RESPONSE
=begin
WEAPONS CONTROLLER
class WeaponsController < ApplicationController
  def toggle_condition
    @weapon = Weapon.find(params[:id]) 
    @weapon.toggle_condition 

    respond_to do |format|
      format.html { redirect_to @weapon, notice: 'Changed condition' }
      format.js
    end
  end
end

TOGGLE CONDITION
$('#condition').text('<%= @weapon.condition %>').effect('highlight');
=end

# 09 - AJAX RESPONSE II
=begin
WEAPONS CONTROLLER
class WeaponsController < ApplicationController
  def reload
    @weapon = Weapon.find(params[:id]) 

    respond_to do |format|
      if @weapon.ammo < 30
        @weapon.reload(params[:ammo_to_reload])
      
        format.json { render json: @weapon.to_json(only: :ammo), status: :ok }
        format.html { redirect_to @weapon, notice: 'Weapon ammo reloaded' }
      else
        format.json { render json: @weapon.to_json(only: :ammo), status: :unprocessable_entity }
        format.html { redirect_to @weapon, notice: 'Weapon not reloaded' }
      end
      
      format.js
    end
  end
end

RELOAD
$('#ammo').text('<%= @weapon.ammo %>');
if (<%= @weapon.ammo %> >= 30) $('#reload_form').fadeOut();
=end

# 10 - COFFEESCRIPT
=begin
$(document).ready ->
  $('div#reload_form form').submit (event) ->
    event.preventDefault()
    url = $(this).attr('action')
    ammo = $('#ammo_to_reload').val()

    $.ajax
      type: 'put'
      url: url
      data: {ammo_to_reload: ammo}
      dataType: 'json'
      success: (json) ->
        $('#ammo').text(json.ammo).effect('highlight')
        $('#reload_form').fadeOut() if json.ammo >= 30
=end