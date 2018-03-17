# 01 - ASSOCIATIONS
# 02 - EMBEDING IDS
class ReviewSerializer < ActiveModel::Serializer
  attributes :id, :description, :approve_url

  has_many :comments, embed: :id
  
  def approve_url
    approve_review_url(object)
  end
end

# 03 - SIDE LOADING ASSOCIATIONS
# 04 - CUSTOM METHODS
class ItemSerializer < ActiveModel::Serializer
  attributes :id, :name

  has_many :reviews
  embed :ids, include: true
  
  def reviews
    object.reviews.approved
  end
end

# 05 - ATTRIBUTES
class ItemSerializer < ActiveModel::Serializer
  attributes :id, :name

  def attributes
    data = super
    data[:price] = object.price if current_user
    data
  end
end

# 06 - CUSTOM SCOPE
class ApplicationController < ActionController::Base
  serialization_scope :current_session
end
