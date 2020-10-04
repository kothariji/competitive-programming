# August Cook-Off 2020 Division 2 » Polygon Relationship
# cook your dish here
for i in range((int)(input())):
    n=(int)(input())
    for k in range(n):
        p,q=map(int,input().split())
    c=n
    d=0
    while(1>0):
        n=n//2
        if n>2:
            c+=n
        else:
            break
    print(c)