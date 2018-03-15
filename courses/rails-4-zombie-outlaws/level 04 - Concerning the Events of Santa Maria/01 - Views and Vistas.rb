# 01 - COLLECTION FORM HELPERS I
=begin
<%= form_for(@limb) do |f| %>
  <div class="field">
    <%= f.label :zombie %><br />
    <%= collection_radio_buttons(:limb, 
                                 :zombie_id, 
                                 @zombies, 
                                 :id, 
                                 :name) %>
  </div>
<% end %>
=end

# 02 - COLLECTION FORM HELPERS II
=begin
<%= form_for(@zombie) do |f| %>
  <div class="field">
    <%= f.label :limbs %><br />
    <%= collection_check_boxes(:limb, 
                               :id, 
                               @limbs, 
                               :id, 
                               :kind) %> 
  </div>
<% end %>
=end

# 03 - DATES
=begin
<%= form_for(@limb) do |f| %>
  <div class="field">
    <%= f.label :date_found %><br />
    <%= f.date_field :date_found %>
  </div>
<% end %>
=end

# 04 - RUBY TEMPLATE HANDLER
limbs_hashes = @limbs.map do |limb|
  { owner_name: limb.zombie.name, kind: limb.kind }
end
# TODO: Output JSON version of limbs_hashes.
limbs_hashes.to_json