# https://www.hackerrank.com/challenges/nested-list/problem?isFullScreen=true


n = int(input())
deg = [] 
names = []

for i in range(n) :
    names.append(input())
    deg.append(float(input()))
    
cls = dict(zip(names , deg))

cls = dict(sorted(cls.items() , key= lambda item : (item[1] , item[0])))

lst = list(cls.values())[0]
got_it = False
ndlst = 0
for item in cls.items() :
    if item[1] == lst : continue
    elif not got_it :
         ndlst = item[1]
         got_it = True 
    if item[1] == ndlst :
        print(item[0])
    else: 
        break