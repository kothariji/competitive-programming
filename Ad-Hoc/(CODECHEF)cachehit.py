for _ in range(int(input())):
    x,b,m = map(int, input().split())
    
    a = list(map(int, input().split()))
    
    c = 1 
    
    for i in range(m-1):
        if (a[i]//b != a[i+1]//b):
            c += 1 
    print(c)        