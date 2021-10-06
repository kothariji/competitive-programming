t = int(input())
for i in range(t):
    arr1 = [int(i) for i in input().split()]
    arr2 = [int(i) for i in input().split()]
    n,p,x,y=arr1[0],arr1[1],arr1[2],arr1[3]
    c= 0
    res = 0
    while (c<p):
        if arr2[c] == 0:
            res +=x
        else:
            res+=y
        c+=1
        
    print(res)