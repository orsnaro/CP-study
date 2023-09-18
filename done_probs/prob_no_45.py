
# https://www.hackerrank.com/challenges/python-lists/problem?isFullScreen=false

if __name__ == '__main__':
    N = int(input())
    ans = []
    for i in range(N) :
      bot , *ls = input().split()
      ls = [int(x) for x in ls]
      if bot.strip() == 'insert' :
        ans.insert( int(ls[0]) , ls[1]) 
      elif bot.strip() == 'print' :
         print (ans)
      elif bot.strip() == 'remove' :
         ans.remove(ls[0])
      elif bot.strip() == 'append' :
         ans.append(ls[0])
      elif bot.strip() == 'sort' :
         ans.sort()
      elif bot.strip() == 'pop' :
         ans.pop()
      elif bot.strip() == 'reverse':
         ans.reverse()
         