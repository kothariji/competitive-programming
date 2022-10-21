try:
    T=int(input())
    for i in range(T):
        x=int(input())
        s=input()
        c,d,n=s.count("C"),s.count("D"),s.count("N")
        if c*2==n*2:
            print(55*x)
        elif c*2+d*1<n*2+d+1:
            print(40*x)
        else:
            print(60*x)
except EOFError:
    pass