# 01 - SKINNY CONTROLLERS I
class ReviewsController < ApplicationController
  def create
    @item = Item.find(params[:review][:item_id])
    @review = @item.reviews.build(review_params)
    
    if @review.add_to_item
      redirect_to @review, notice: 'Successfully created'
    else
      flash[:error] = 'Did not save review.'
      render :new
    end
  end

  def new
    @review = Review.new
  end

  def show
    @review = Review.find(review_params)
  end

  private

  def review_params
    params.require(:review).permit(:description)
  end
end

# 02 - SKINNY CONTROLLERS II
class Review < ActiveRecord::Base
  belongs_to :item

  def add_to_item
    save unless bad_words?
  end

  private
    def bad_words?
      description =~ /BAD_WORD/
    end
end

# 03 - ACTIVERECORD CALLBACKS
class Item < ActiveRecord::Base
  before_save :set_pretty_url
  
  protected
  def set_pretty_url
    self.pretty_url = self.name.parameterize
  end
end

# 04 - NON-AR MODELS - PART I
# 05 - NON-AR MODELS - PART II
class UserRegistration
  attr_reader :user

  def initialize(params)
    @user = User.new(params)
  end
  
  def create
    @user.is_approved = true if valid_background_check?
    @user.save
  end

  private

  def valid_background_check?
    !!(@user.valid_ssn? || @user.valid_address?)
  end
end

# 06 - NON-AR MODELS - PART III
class UsersController < ApplicationController
  def create
    user_r = UserRegistration.new(user_params)
    @user = user_r.user
    
    if user_r.create
      redirect_to @user
    else
      render :new
    end
  end

  private
  def user_params
    params.require(:user).permit(:name, :email, :ssn, :address)
  end
end

# 07 - SKINNY MODELS I
class User < ActiveRecord::Base
  def welcome
    send_welcome_email
    enable_welcome_tour
    enable_welcome_promotion
  end
  
  private
  def send_welcome_email
    WelcomeMailer.welcome(self).deliver
  end
  
  def enable_welcome_tour
    self.welcome_tour = true
    self.save
  end
  
  def enable_welcome_promotion
    promo = Promotion.new(name: "Thanks for joining!")
    promo.set_redeemer(self)
  end
end

# 08 - SKINNY MODELS II
class UserWelcome
  attr_accessor :user
  
  def initialize(user)
    @user = user
  end
  
  def welcome
    send_welcome_email
    enable_welcome_tour
    enable_welcome_promotion
  end
  
  private

  def send_welcome_email
    WelcomeMailer.welcome(user).deliver
  end

  def enable_welcome_tour
    user.welcome_tour = true
    user.save
  end

  def enable_welcome_promotion
    promo = Promotion.new(name: "Thanks for joining!")
    promo.set_redeemer(user)
  end
end
