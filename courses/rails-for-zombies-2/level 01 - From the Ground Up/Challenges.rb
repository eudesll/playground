# 01 - RAILS NEW
rails new ZombieTweets

# 02 - GENERATE SCAFFOLD
rails generate scaffold tweet status:string zombie_id:integer

# 03 - CREATE TWEETS TABLE
class CreateTweets < ActiveRecord::Migration
  def change
    create_table :tweets do |t|
      t.string :status
      t.integer :zombie_id
    end
  end
end

# 04 - RUN MIGRATION
rake db:migrate

# 05 - BOOT IT UP
rails server

# 06 - ADD COLUMN TO TABLE
rails g migration AddPrivacyToTweets private:boolean

# 07 - CREATE MIGRATION BY HAND
class AddLocationToTweets < ActiveRecord::Migration
  def change
    add_column :tweets, :location, :string, limit: 30
    add_column :tweets, :show_location, :boolean, default: false
  end
end

# 08 - ROLLBACK MIGRATION
rake db:rollback

# 09 - CHANGE TABLE
class AddLocationToTweets < ActiveRecord::Migration
  def change
    add_column :tweets, :location, :string, limit: 30
    add_column :tweets, :show_location, :boolean, default: false
    add_column :tweets, :category_name, :string
    rename_column :tweets, :status, :message
  end 
end

# 10 - REMOVE COLUMN
class RemoveCategoryNameFromTweets < ActiveRecord::Migration
  def up
    remove_column :tweets, :category_name
  end

  def down
    add_column :tweets, :category_name, :string
  end
end

# 11 - DATABASE SETUP
rake db:setup

# 12 - IN THE CONSOLE
rails console
Tweet.create()
next