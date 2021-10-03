def main():
    n = int(input())
    a = list(map(int,input().split()))
    d = int(input())
    b = [0]*n
    if d%n==0:
        for i in a:
            print(i,end=" ")
    else:
        d = d%n
        for i in range(n):
            x = i-d
            if x<0:
                x = n+x
            b[x] = a[i]
        for i in b:
            print(i,end=" ")

if __name__=="__main__":
    main()