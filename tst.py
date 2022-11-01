<<<<<<< HEAD
def print_rangoli(size):
	# a = 97  z = 122
	# 27 + x = 122 -- > x = 95  shift value
	# NUM of  col =  4n -3
	# mid if odd = num of col /2 +1
	mcnt = 1
	echr = chr(size + 96)
	colnum = size * 4 - 3
	rows = size * 2 - 1
	midrow =  int(rows / 2)
	strtpos = int(midrow) * 2
	for j in range ( rows ) :
		endchar = echr
		cnt = mcnt
		ok = True
		for i in range(colnum):
			if (i & 1 == 0 and i <= int(colnum / 2) ) and strtpos <= i  and cnt > 0:  # even
				print(endchar, end='')
				endchar = chr(ord(endchar) - 1)
				cnt -= 1
				continue
			elif (i & 1 == 1 and i <= int(colnum / 2)) or (i < strtpos and cnt > 0):
				print("-", end='')
			if (i & 1 == 0 and i > int(colnum / 2) )and strtpos <= i and cnt > 0:  # even
				if ok :
					endchar = chr (ord(echr) - (int(cnt / 2 ) - 1 ) )
					ok = False
				endchar = chr(ord(endchar) - 1)
				print(endchar, end='')
				cnt -= 1
				continue
			elif (i & 1 == 1 and i > int(colnum / 2) ) or (i > strtpos and cnt <= 0) :
				print("-", end='')
		print ()
		strtpos -= 2
		mcnt  += 2

if __name__ == '__main__':
	n = int(input())
	print_rangoli(n)
=======


# prob link :
# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy
numpy.set_printoptions(legacy='1.13')

n,m = [input(x) for x in input().split()]
print (numpy.eye(int(n),int(m),k = 0))

>>>>>>> d8a465884fe518b527b8191a259c866bf19a4ea6
