# prob link :
# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy
numpy.set_printoptions(legacy='1.13')

n,m = [input(x) for x in input().split()]
print (numpy.eye(int(n),int(m),k = 0))
