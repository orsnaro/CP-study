# problem: https://www.hackerrank.com/challenges/ginorts/problem
s = input()
cLst = []
CLst = []
oLst = []
eLst = []

for c in s:
    if(c.islower()):
        cLst.append(c)
    if(c.isupper()):
        CLst.append(c)
    if(c.isdigit()):
        if(int(c) % 2 != 0):
            oLst.append(c)
        else:
            eLst.append(c)
    
cLst.sort()
CLst.sort()
oLst.sort()
eLst.sort()

for c in cLst :
    print(c, end="")
for c in CLst :
    print(c, end="")
for c in oLst :
    print(c, end="")
for c in eLst :
    print(c, end="")
