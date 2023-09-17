# https://www.hackerrank.com/challenges/finding-the-percentage/problem?isFullScreen=false


if __name__ == '__main__':
	n = int(input())
	student_marks = {}
	for _ in range(n):
		name, *line = input().split()
		scores = list(map(float, line))
		student_marks[name] = scores
	query_name = input()
	
	ls = student_marks[query_name]
	
	avg = 0 
	sz = len(ls)
	for i in ls :
		avg += i
	
	avg = avg/sz
	print( "{:.2f}".format(avg) )