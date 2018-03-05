# 01 - SCOPES I
class Tweet < ActiveRecord::Base
  scope :recent, order('created_at desc').limit(4)
end

# 02 - SCOPES II
class Tweet < ActiveRecord::Base
  scope :recent, order('created_at desc').limit(4) 
  scope :graveyard, where(show_location: true, location: 'graveyard')
end

# 03 - USING SCOPES
class TweetsController < ApplicationController
  def index
    @tweets = Tweet.all
    @graveyard_tweets = Tweet.recent.graveyard
  end
end

# 04 - BEFORE SAVE
class Tweet < ActiveRecord::Base
  before_save :check_location
  
  def check_location
    self.show_location = true if self.location?
  end
end

# 05 - CALLBACK LOGGING
class Tweet < ActiveRecord::Base
  after_update :log_update
  after_destroy :log_destroy

  def log_update
    logger.info "Tweet #{id} updated"
  end

  def log_destroy
    logger.info "Tweet #{id} deleted"
  end
end

# 06 - HAS ONE
class Tweet < ActiveRecord::Base
  has_one :location
end

class Location < ActiveRecord::Base
  belongs_to :tweet
end

# 07 - FOREIGN KEY
class Tweet < ActiveRecord::Base
  has_one :location, foreign_key: :tweeter_id, dependent: :destroy
end

class Location < ActiveRecord::Base
  belongs_to :tweet,  foreign_key: :tweeter_id
end

# 08 - INCLUDES
class TweetsController < ApplicationController 
  def index
    @tweets = Tweet.includes(:location).recent
  end
end

# 09 - RELATIONSHIP MIGRATION
class AddTweetCategories < ActiveRecord::Migration
  def change
    create_table :categories do |t|
      t.string :name
    end
    create_table :categorizations do |t|
      t.integer :tweet_id
      t.integer :category_id
    end
    add_index(:categorizations, :tweet_id)
    add_index(:categorizations, :category_id)
  end 
end

# 10 - HAS MANY THROUGH
class Tweet < ActiveRecord::Base
  has_many :categorizations
  has_many :categories, through: :categorizations
end

class Categorization < ActiveRecord::Base
  belongs_to :tweet
  belongs_to :category
end

class Category < ActiveRecord::Base
  has_many :categorizations
  has_many :tweets, through: :categorizations
end
