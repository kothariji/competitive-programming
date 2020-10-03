try:
    t=int(input())
    for i in range(t):
        a,k=map(int,input().split())
        arr=list(map(int,input().strip().split()))[:a]
        l=[]
        for j in arr:
            if(k%j==0):
                l.append(j)
        l.sort(reverse=True)
        if(len(l)==0):
            print(-1)
            continue
        else:
            print(l[0])
except:
    pass
