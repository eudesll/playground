class ZombiesController < ApplicationController
  before_action :find_zombie
  before_action :has_tweets, only: :show

  def show
    render action: :show
  end

  def find_zombie
    @zombie = Zombie.find params[:id]
  end
  
  def has_tweets
    redirect_to @zombie unless @zombie.tweets.any?
  end
end