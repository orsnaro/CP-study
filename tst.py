# prob link : https://www.hackerrank.com/challenges/the-minion-game/problem?isFullScreen=false
def minion_game(string):
    strsz = len(string)
    vowls = ['I', 'O', 'U', 'A', 'E']
    allsubs = []
    Kevin = 0
    Stuart = 0

    for i in range(0, strsz, 1):
        is_vowl = False
        if vowls.count(string[i]) == 1:
            Kevin += strsz - i
        else:
            Stuart += strsz - i

    # print (allsubs) , print ( len(allsubs))
    if Kevin > Stuart:
        print(f"Kevin {Kevin}")
    elif Stuart > Kevin:
        print(f"Stuart {Stuart}")
    else:
        print(f"Draw")


<<<<<<< HEAD
age = 20
float_var = 19.23
first_name = "mosh"
is_bool = False
print( " please enter your age  and name : ")
first_name = input ( "\n name : \n ")
=======
if __name__ == '__main__':
    s = input()
    minion_game(s)
>>>>>>> e9d86d57c5644b6b12a6f068f00878b9d2ecf6fe
