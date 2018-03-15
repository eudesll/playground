# 01 - SKIPPING TESTS
class ZombieTest < ActiveSupport::TestCase
  test "should match number of Items" do
    skip
    zombie = Zombie.new
    zombie.items.new(name: 'revolver')
    zombie.items.new(name: 'noose')
    assert_equal 2, zombie.item_count
  end
end

# 02 - RAKE TASKS
rake test:models

# 03 - VERBOSE MODE
rake test:models TEST_OPTS="--verbose"