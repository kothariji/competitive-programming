def Covid_run(n,k,x,y):
  if(0<=x,y<=n-1):
    current=x
    while(current != y):
        current=(current+k)%n
        if(current == x):
            return "NO"
                
    return "YES"
try:
    
  t=int(input())
  for i in range(t):
    n,k,x,y=map(int,input().split())
    print(Covid_run(n,k,x,y))
        
except:
  pass
