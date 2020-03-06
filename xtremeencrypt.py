import sys

try:

	a,b = raw_input().split()
	n = ""
	flag = "No"
	ncopia = 0

	i = 0
	
	while(i < (len(a))):
		
		if( a[i] in b ):
			
			print "Esta"
			n = n + a[i]
			print n
			print a
			i += 1
		
		else:
			break
	
	print "Entre"
	if(ncopia == 0):

		print flag 

	else:
		flag = "ANY"
		print flag

except  EOFError:
    exit# your code goes here