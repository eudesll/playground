# 01 - GENERATE MAILER
rails g mailer WeaponMailer low_ammo broken

# 02 - SIMPLE MAILER
class WeaponMailer < ActionMailer::Base
  default from: 'admin@rfz.com'
  
  def low_ammo(weapon, zombie)
    mail to: zombie.email, subject: "#{weapon.name} has low ammo"
  end
end

# 03 - MAIL DELIVERY
class Weapon < ActiveRecord::Base
  belongs_to :zombie 

  before_save :check_ammo

  def check_ammo
    WeaponMailer.low_ammo(self, self.zombie).deliver if ammo == 3
  end
end

# 04 - ATTACHING A FILE
class WeaponMailer < ActionMailer::Base
  default from: "admin@rfz.com"

  def low_ammo(weapon, zombie)
    attachments['weapon.jpg'] = weapon.picture_file
    mail to: zombie.email, subject: "#{weapon.name} has low ammo"
  end 
end

# 05 - ASSET TAGS
=begin
<%= image_tag "weapon.png" %>
<%= javascript_include_tag "weapon.js" %>
<%= stylesheet_link_tag "weapon.css" %>
=end

# 06 - ASSET PATH
=begin
h2#newUser {
  text-indent: -9999px;
  
  a {
    height: 64px;
    width: 50px;
    display: block;
    background: url(<%= asset_path('rails.png') %>) no-repeat;
  }
}
=end

# 07 - COFFEESCRIPTIN
=begin
$(document).ready ->
  $('#displayWeaponForm').click (event) ->
    event.preventDefault();
    $('#newWeapon').show();
    $(this).hide();
=end

# 08 - REQUIRING JAVASCRIPTS
=begin
//= require jquery
//= require jquery_ujs
//= require calendar
//= require color_picker
//= require_tree .
=end