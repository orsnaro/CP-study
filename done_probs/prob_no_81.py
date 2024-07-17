#problem: https://www.hackerrank.com/challenges/iterables-and-iterators/problem

import math as m
import itertools as itr

#taking input

n = int(input())
cStr = input()
cStr = cStr.replace(" ", "")
    
k = int(input())

combCount = m.factorial(n) / ( (m.factorial(k) * m.factorial( (n-k) ) ) )
combs = itr.combinations(cStr, k)

hasA = 0
for comb in combs :
    for char in comb :
        if char == 'a':
            hasA += 1
            break;
        
print(hasA/combCount)
