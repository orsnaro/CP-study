# https://www.hackerrank.com/challenges/string-validators/problem?isFullScreen=false&h_r=next-challenge&h_v=zen

if __name__ == '__main__':
	s = input()
    
  
	has_up  = False
	has_lo  = False
	has_dig = False
	
 
	for c in s: 
		if c.islower() :
			has_lo = True
		if c.isupper() :
			has_up = True
		if c.isdigit() :
			has_dig = True
	
  
	if has_up or has_lo or has_dig :
		print(True)
	else : 
		print(False)
  
	if has_up or has_lo :
		print(True)
	else : 
		print(False)
  
	if has_dig :
		print(True)
	else : 
		print(False)
  
	if has_lo :
		print(True)
	else : 
		print(False)
  
	if has_up :
		print(True)
	else : 
		print(False)
  
   