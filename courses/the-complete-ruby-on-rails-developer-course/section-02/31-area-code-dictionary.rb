=begin
Homework Description

1. Create a dictionary (hash) with 10 city names, where the city name would be a string and the key, and the area code would be the value

2. Display the city names to the user which are available in the dictionary

3. Get input from the user on the city name (hint: use gets.chomp method)

4. Display area code based on user's city choice

5. Loop - keep the program running and prompt the user for new city names to lookup

6. Method to look up area code, this will take in a hash of the dictionary and the city name and will output area code

7. Method to display just city names
=end

def get_city_area_code(cities_dict, city_name)
	cities_dict[city_name]
end

def display_city_names(cities_dict)
	cities_dict.each { |k, v| puts k.capitalize }
end

rmr_cities = { "recife" => "1", "olinda" => "2", "jaboatao" => "3", "paulista" => "4" }

puts "Cities of Recife metropolitan region:"
# rmr_cities.keys.each { | city | puts city.capitalize }
display_city_names rmr_cities

loop do
	puts
	puts "Insert a city name:"
	city_name = gets.chomp

	if rmr_cities.has_key?(city_name)
		city_area_code = get_city_area_code(rmr_cities, city_name)
		puts "The area code of this city is #{city_area_code}"
	else
		puts "There is no area code for this city"
	end

	puts
	puts "Press 'Y' if you want to continue:"
	prompt = gets.chomp

	if prompt != 'Y' && prompt != 'y'
		break
	end
end