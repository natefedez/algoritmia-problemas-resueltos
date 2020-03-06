import sys

try:
    
    n = int(input())

    a = [int(x) for x in input().split()]

    q = lambda a:a > sorted(a) and q(a[::2]) or a
    
    resp = q(a)
    
    print(len(resp))

except EOFError:
    exit
