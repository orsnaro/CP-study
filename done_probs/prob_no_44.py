# https://www.hackerrank.com/challenges/swap-case/problem?isFullScreen=false


def swap_case(s : str ):
	ans = ""
	for c in s:
		if c.isupper() :
			ans  = ans + c.lower()
		else :
			ans = ans + c.upper()
	return ans

if __name__ == '__main__':
	s = input()
	result = swap_case(s)
	print(result)