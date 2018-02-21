require 'delegate'
class Library < SimpleDelegator
  def initialize(console)
    super(console)
  end
end
