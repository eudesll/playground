import urllib
import xml.etree.ElementTree as ET

url = raw_input('Enter location:')

html = urllib.urlopen(url).read()

xml = ET.fromstring(html)
comments = xml.findall('comments/comment')

print 'Retrieving', url
print 'Retrieved', len(html), 'characters'
print 'Count', len(comments)
print 'Sum', sum(int(i.find('count').text) for i in comments)