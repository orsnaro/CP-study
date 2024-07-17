# problem: https://www.hackerrank.com/challenges/validating-credit-card-number/problem
import re

n = int(input())
pattern1 = r"^[456]"
pattern2 = r"\d{16}"
pattern3 = r"\d{4}-\d{4}-\d{4}-\d{4}"
NoPattern = r"[\._\s]"
NoPattern2 = r'0{4}|1{4}|2{4}|3{4}|4{4}|5{4}|6{4}|7{4}|8{4}|9{4}'


for i in range(n):
    card = input()
    match3 = re.fullmatch(pattern3, card)
    hashyphen = card.find('-')
    card = card.replace("-", "")
    matches = re.findall(NoPattern2, card) # or use re.search
    matches2 = re.findall(NoPattern, card)
    if(len(matches) > 0 or len(matches2) > 0):
        print("Invalid")
        continue
        
    match1 = re.match(pattern1, card)
    match2 = re.fullmatch(pattern2, card) #(len(card) == 16)
    if(match1 != None and match2 != None):
        if(hashyphen != -1 and match3 != None):
            print("Valid")
        elif(hashyphen != -1 and match3 == None):
            print("Invalid")
        else:    
            print("Valid")
    else:
        print("Invalid")
    
    #check size is exactly 16 digit
    
