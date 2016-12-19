import urllib
from BeautifulSoup import *

urlSample = 'http://python-data.dr-chuck.net/comments_42.html'
urlActual = 'http://python-data.dr-chuck.net/comments_238041.html'

html = urllib.urlopen(urlActual).read()
soup = BeautifulSoup(html)

# Retrieve all of the anchor tags
tags = soup('span')
print sum(int(i.contents[0]) for i in tags)