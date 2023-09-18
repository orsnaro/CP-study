# https://www.hackerrank.com/challenges/no-idea/problem?isFullScreen=true

n , m = input().split()
arr = list(input().split())
freq = {}
for i in arr :
	if freq.get(i) is None :
		freq[i] = 1
	else :
		freq[i] += 1
  
arr = set(arr)

a = set(input().split())
b = set(input().split())
ans = 0

for i in arr :
	if i in a :
		a.remove(i)
		ans += freq[i]
	elif i in b :
		b.remove(i)
		ans -= freq[i]
  
print(ans)
