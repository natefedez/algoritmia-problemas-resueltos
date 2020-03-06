import math
import sys

try:

	n = int(input())

	while(n > 0):

		n, d = [int(x) for x in input().split()]

		seg = list(n);

		print(seg);


		n = n - 1


except EOFError:
    exit