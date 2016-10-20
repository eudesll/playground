'''
   HackerRank
   Problem Name: ctci-fibonacci-numbers
'''

fib = lambda n:pow(2 << n, n + 1, (4 << 2 * n) - (2 << n) - 1) % (2 << n)

n = int(input())
print (fib(n))
