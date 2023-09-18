
# https://www.hackerrank.com/challenges/find-a-string/problem?isFullScreen=false&h_r=next-challenge&h_v=zen

def count_substring(string : str , sub_string):
	ans = 0 
	sz = len(string)
	sz2 = len(sub_string)
	for i in range(sz) :
		if string[i:(i+sz2)] == str(sub_string) :
			ans += 1
	return ans

if __name__ == '__main__':
	string = input().strip()
	sub_string = input().strip()
	
	count = count_substring(string, sub_string)
	print(count)