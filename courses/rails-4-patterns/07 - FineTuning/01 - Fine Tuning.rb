# 01 - PLUCK
class Item < ActiveRecord::Base

  def self.recent
    where('published_on > ?', 2.days.ago).pluck(:id, :name)
  end
end

# 02 - SENSITIVE PARAMETERS
class Rails4Patterns::Application
  # hiding other config for brevity...
  config.filter_parameters += [:password, :security_answer]
end

# 03 - SET APPLICATION SERVER
source 'https://rubygems.org'

gem 'rails', '4.0.0'
gem 'sqlite3'
gem 'sass-rails', '~> 4.0.0'
gem 'uglifier', '>= 1.3.0'
gem 'coffee-rails', '~> 4.0.0'
gem 'jquery-rails'
gem 'turbolinks'

gem 'puma'

group :doc do
  gem 'sdoc', require: false
end

# 04 - SET RUBY VERSION
source 'https://rubygems.org'

ruby '2.0.0'

gem 'rails', '4.0.0'
gem 'sqlite3'
gem 'sass-rails', '~> 4.0.0'
gem 'uglifier', '>= 1.3.0'
gem 'coffee-rails', '~> 4.0.0'
gem 'jquery-rails'
gem 'turbolinks'

group :doc do
  gem 'sdoc', require: false
end

gem 'puma'

# 05 - BASIC PROCFILE
web: bundle exec rails s -p $PORT

# 06 - ADVANCED PROCFILE
web: bundle exec rails s -p $PORT
worker: bundle exec rake worker
urgent_worker: bundle exec rake urgent_worker
scheduler:  bundle exec rake scheduler
