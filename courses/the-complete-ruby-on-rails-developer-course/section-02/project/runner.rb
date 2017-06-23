require 'pp' # Pretty Print
require_relative 'user'

user = User.new 'eudesllemos@gmail.com', 'Eudes'

pp user

user.save