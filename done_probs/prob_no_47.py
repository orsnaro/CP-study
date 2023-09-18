# https://www.hackerrank.com/challenges/python-mutations/problem?isFullScreen=false

def mutate_string(string, position, character):
	ans = list(string)
	ans[position] = character
	ans2 = str("")
	for i in ans:
		ans2 = ans2 + i 
	return ans2.strip()
if __name__ == '__main__':
	s = input()
	i, c = input().split()
	s_new = mutate_string(s, int(i), c)
	print(s_new)