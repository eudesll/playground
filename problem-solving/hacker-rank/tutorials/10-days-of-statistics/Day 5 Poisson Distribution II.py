'''
	HackerRank
	Problem Name: s10-poisson-distribution-2
'''

from math import factorial, e

a, b = [float(x) for x in input().split()]

def poisson(mean, value):
    return (mean**value * e**-mean) / factorial(value)

def cost_a(x):
    return 160 + 40 * x**2

def cost_b(y):
    return 128 + 40 * y**2

def avg_cost(rate, cost_func):
    avg = 0
    for repairs in range(11):
        avg += poisson(rate, repairs) * cost_func(repairs) 
    return avg

print('{:0.3f}'.format(avg_cost(a, cost_a)))
print('{:0.3f}'.format(avg_cost(b, cost_b)))