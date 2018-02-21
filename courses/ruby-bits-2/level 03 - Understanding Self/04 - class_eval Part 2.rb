class LibraryManager
  def self.make_available(klass, user)
    klass.class_eval do
      define_method "lend_to_#{user}" do
      end
    end
  end
end
