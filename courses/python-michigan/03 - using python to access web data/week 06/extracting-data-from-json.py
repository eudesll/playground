import urllib
import json

urlSample = 'http://python-data.dr-chuck.net/comments_42.json'
urlActual = 'http://python-data.dr-chuck.net/comments_238042.json'

data = urllib.urlopen(urlActual).read()
print 'Retrieved', len(data), 'characters'

comments = json.loads(str(data))
print sum(int(i['count']) for i in comments['comments'])