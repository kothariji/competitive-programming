n=int(input())
tot=0
while n>0:
    k=list(map(int,input().strip().split()))
    count=0
    for i in range(0,len(k)):
        if k[i]==1:
            count+=1
    if count>=2:
        tot+=1
    n-=1
print(tot)
