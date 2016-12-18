'''
   HackerRank
   Problem Name: python-lists
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
n = input()
l = []
for _ in range(n):
	s = raw_input().split()
	cmd = s[0]
	args = s[1:]
	if cmd !="print":
		cmd += "("+ ",".join(args) +")"
		eval("l."+cmd)
	else:
		print l