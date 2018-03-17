# 01 - TESTING WITH MIME TYPE
class ListingHumansTest < ActionDispatch::IntegrationTest
  test 'returns humans in JSON' do
    get '/humans', {}, { 'Accept' => Mime::JSON }
    assert_equal 200, response.status
    assert_equal Mime::JSON, response.content_type
  end
end

# 02 - USING RESPOND_TO
class HumansController < ApplicationController
  def index
    humans = Human.all

    respond_to do |format|
      format.json { render json: humans, status: :ok }
      format.xml { render xml: humans, status: :ok }
    end
  end
end

# 03 - LISTING MIME TYPES
Mime::SET
Mime::SET.collect(&:to_s)

# 04 - USING CUSTOM HEADERS WITH CURL
curl -IH 'Accept: application/json' http://cs-zombies-dev.com:3000/humans