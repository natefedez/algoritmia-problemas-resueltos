import math
import sys
from fractions import gcd

def main(): 

	n = int(input())
	primos = []
	mcd = 0
	temp = 0
      
	while(n > 0):


		primos = criba(n ** (1. /2))

		i = 0

	 	while(i < len(primos) or n == 1):

	 		if(n%primos[i] == 0):

	 			n = n // primos[i]

	 			temp += 1

	 		else: 
	 			i += 1

	 			if(mcd == 0):

	 				mcd = temp

	 			else:

	 				mcd = gcd(temp, mcd)
	 	
	 	if(mcd == 0):

	 		print(1)

	 	else:

	 		print(mcd)


      
	    

	  
# driver program 
#if __name__=='__main__': 
    #n = 30
    #print "Following are the prime numbers smaller", 
    #print "than or equal to", n 
    #SieveOfEratosthenes(n) 


def criba(n):

	primos = [True for i in range(n+1)] 
	p = 2
	while (p * p <= n): 
	      
	    # If prime[p] is not changed, then it is a prime 
	    if (primos[p] == True): 
	          
	        # Update all multiples of p 
	        for i in range(p * p, n+1, p): 
	            primos[i] = False
	    p += 1

	# Print all prime numbers 
	for p in range(2, n): 
	    if prime[p]: 
	        print p, 

	return primos 

print(main())