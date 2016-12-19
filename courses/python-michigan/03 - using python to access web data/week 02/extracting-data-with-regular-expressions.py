import re
import urllib

sum27486 = 'http://python-data.dr-chuck.net/regex_sum_42.txt'
sumEnds297 = 'http://python-data.dr-chuck.net/regex_sum_238036.txt'

text = urllib.urlopen(sumEnds297).read()

print(sum(map(int, re.findall('[0-9]+', text))))