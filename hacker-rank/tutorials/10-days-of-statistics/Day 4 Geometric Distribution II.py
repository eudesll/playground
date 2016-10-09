'''
	HackerRank
	Problem Name: s10-geometric-distribution-2
'''

numerator, denominator = [int(x) for x in input().split()]
fail = numerator/denominator
number = int(input().strip())
success = 1 - fail 
       
ans_1 = 1 - success ** number

print('{:0.3f}'.format(ans_1))