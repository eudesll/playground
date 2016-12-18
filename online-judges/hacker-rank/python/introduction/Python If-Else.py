'''
   HackerRank
   Problem Name: python-if-else
'''

#!/bin/python

import sys

N = int(raw_input().strip())

if N % 2 != 0 or 6 <= N and N <= 20: 
    print("Weird")
else:
    print("Not Weird")
