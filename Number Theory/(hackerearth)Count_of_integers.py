def sieve(N):
    primes=[2]*(N+1)
    primes[0]=0
    primes[1]=1
    i=2
    while(i<=N):
        for k in range(i*2,N+1,i):
            primes[k]+=1
        i+=1
    return primes
    
def main():
    Q=int(input())
    queries=[]
    for _ in range(Q):
        N=int(input())
        queries.append(N)
    primes=sieve(max(queries))
    for i in range(Q):
        N=queries[i]
        result=queries[i]
        p=2
        temp=N
        while(p*p<=N):
            if(N%p==0):
                while((N%p)==0):
                    N=N//p
                result-=result//p
            p+=1
        if N>1:
            result-=result//N
        N=temp
        print(N-result-(primes[N]-1))
    
if __name__=='__main__':
    main()
