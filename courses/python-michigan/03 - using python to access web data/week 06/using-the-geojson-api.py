import urllib
import json

location = raw_input('Enter Location:')

url = 'http://python-data.dr-chuck.net/geojson?' + urllib.urlencode({'sensor':'false', 'address': location})
data = urllib.urlopen(url).read()

print 'Retrieving http://...'
print 'Retrieved', len(data), 'characters'

js = json.loads(str(data))
print 'Place id', js['results'][0]['place_id']