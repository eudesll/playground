"""
Rosalind
Problem Name: Rabbits and Recurrence Relations
"""

fibs = {0: 0, 1: 1, 2: 1}

def fib(n, k):
    if n in fibs:
        return fibs[n]
    else:
        fibs[n] = fib(n - 1, k) + k * fib(n - 2, k)
        return fibs[n]

n = 29
k = 2
print fib(n, k)