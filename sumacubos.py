import math
import sys

try:

	n = int(input())
	resa = 0
	resb = 0
	refinal = 0

	while(n > 0):

		a, b = [int(x) for x in raw_input().split()]

		#a = a - 1

		a = int(math.ceil(a ** (1. /3)))

		resa = ((a*(a-1))//2)

		resa *= resa 

		b1 = int(math.floor(b ** (1. /3)))
		
		if(((b1+1)**3)<=b):
			b1+=1
			
		b = b1

		resb = ((b*(b+1))//2)

		resb *= resb

		resfinal = int(resb - resa)

		print(resfinal%1000007)

		n = n - 1 

except EOFError:
    exit