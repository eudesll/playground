# 01 - BASIC SERIALIZER
class ReviewSerializer < ActiveModel::Serializer
  attributes :id, :description
end

# 02 - REMOVE ROOT NODE
class ReviewArraySerializer < ActiveModel::ArraySerializer
  self.root = false
end

# 03 - CUSTOM PROPERTY
class ReviewSerializer < ActiveModel::Serializer
  attributes :id, :description, :approve_url
  
  def approve_url
    approve_review_url(object)
  end
end
