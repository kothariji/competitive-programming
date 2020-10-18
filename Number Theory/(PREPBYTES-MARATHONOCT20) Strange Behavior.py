Question Link: "https://mycode.prepbytes.com/contest/MARATHONOCT20/problems/STRANGE"

import math

if __name__ == "__main__": 
  t= int(input())
  # primeFactors()
  
  while(t):
    n=int(input())
    k=int(math.sqrt(n))
    r=math.sqrt(n)
    if(n==k*k):
      print(n+1)
    else:
      print((k+1)*(k+1))
    # print(p,n,a,b)
    t=t-1
