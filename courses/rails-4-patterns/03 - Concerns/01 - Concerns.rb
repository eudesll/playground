# 01 - MODEL CONCERNS I
# 02 - MODEL CONCERNS 2
module Reviewable
  extend ActiveSupport::Concern

  included do
    has_many :reviews, as: :reviewable, dependent: :destroy
  end

  def reviews_rating
    (reviews.positive.count / reviews.approved.count.to_f).round(2)
  end
  
  module ClassMethods
    def with_no_reviews
      where('id NOT IN (SELECT DISTINCT(reviewable_id) FROM reviews WHERE reviewable_type = ?)', self.name)
    end
  end
end

# 03 - CONTROLLER CONCERNS I
module ImageExportable
  def send_image(image_path)
    send_file(image_path, type: 'image/jpeg',  disposition: 'inline')
  end
end

# 04 - CONTROLLER CONCERNS II
class UsersController < ApplicationController
  include ImageExportable
  
  def file
    user = User.find(params[:id])
    send_image(user.image)
  end
end
