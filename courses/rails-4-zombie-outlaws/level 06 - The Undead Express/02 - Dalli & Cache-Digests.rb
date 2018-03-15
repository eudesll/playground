# 01 - FRAGMENT CACHING I
=begin
<% cache zombie do %>
	<li><%= zombie %></li>
<% end %>
=end

# 02 - FRAGMENT CACHING II
class Zombie < ActiveRecord::Base
  belongs_to :weapon, touch: true
end

# 03 - CACHE DIGESTS I
=begin
<% cache @weapon do %>
  <section>
    <h3><%= @weapon.name %></h3>
    <ul>
      <%= render @weapon.zombies %>
    </ul>
    <%= link_to 'Details', @weapon %>
  </section>
<% end %>
=end

# 04 - CACHE DIGESTS II
=begin
<% cache @weapon do %>
  <section>
    <h3><%= @weapon.name %></h3>
    <ul>
      <%= render partial: 'zombies/zombie', collection: @weapon.zombies.recent %>
    </ul>
    <%= link_to 'Details', @weapon %>
  </section>
<% end %>
=end