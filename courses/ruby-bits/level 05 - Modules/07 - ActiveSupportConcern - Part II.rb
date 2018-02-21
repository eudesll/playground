module LibraryUtils

  extend ActiveSupport::Concern
  
  included do
    load_game_list
  end

  def add_game(game)
  end

  def remove_game(game)
  end

  module ClassMethods
    def search_by_game_name(name)
    end

    def load_game_list
    end
  end
end
