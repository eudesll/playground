'''
   HackerRank
   Problem Name: find-second-maximum-number-in-a-list
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
n = input()
l = sorted(map(int, list(set(input().split()))), reverse=True)

print(l[1])