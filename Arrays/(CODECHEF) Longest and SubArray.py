t=int(input())
for i in range(t):
    n=int(input())
    j=1 
    while(j<=n):
        a=j 
        j=j*2 
    b=(n-a)+1 
    print(max((a//2),b))
