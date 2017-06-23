require 'json'

class User

  attr_accessor :email, :name, :permissions

  def initialize(*args)
    @email = args[0]
    @name = args[1]
    @permissions = User.permissions_from_template
  end

  def save
    self_json = { email: @email, name: @name, permissions: @permissions }.to_json
    open('users.json', 'a') do |file|
      file.puts self_json
    end
  end

  def self.permissions_from_template
    file = File.read 'user_permissions_template.json'
    JSON.load(file, nil, symbolize_names: true)
  end
end