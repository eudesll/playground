# 01 - EXTRACT VIEW LOGIC
class ItemDecorator
  attr_reader :item
  
  def initialize(item)
    @item = item
  end
  
  def is_featured?
    self.ratings > 5
  end
  
  def method_missing(method_name, *args, &block)
    item.send(method_name, *args, &block)
  end
  
  def respond_to_missing?(method_name, include_private = false)
    item.respond_to?(method_name, include_private) || super
  end
end

# 02 - DECORATORS FROM VIEWS
=begin
<h2><%= @item_decorator.title %></h2>

<% if @item_decorator.is_featured? %>
  <h3><%= featured_image %></h3>
<% end %>

<p><%= @item_decorator.description %></p>
=end

# 03 - DECORATORS FROM CONTROLLERS
class ItemsController < ApplicationController
  def index
    @items = ItemDecorator.build_collection(Item.all)
  end
end

# 04 - EXTRACT FROM VIEW HELPERS I
class ItemDecorator
  def initialize(item)
    @item = item
  end

  def method_missing(method_name, *args, &block)
    @item.send(method_name, *args, &block)
  end

  def respond_to_missing?(method_name, include_private = false)
    @item.respond_to?(method_name, include_private) || super
  end
  
  def status()
    if @item.sold?
      "Sold at #{@item.sold_on.strftime('%A, %B %e')}"
    else
      "Available"
    end
  end
end

# 05 - EXTRACT FROM VIEW HELPERS II
=begin
<li>
  <%= @item_decorator.name %> <i><%= @item_decorator.status() %></i>
</li>
=end