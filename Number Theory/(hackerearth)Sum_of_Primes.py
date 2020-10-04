def prime():
    pr=[1]*(1000001)
    pr[0]=0
    pr[1]=0
    prm=[0]*(1000001)
    for i in range(2,int(1000001**0.5)):
        if pr[i]==1:
            for j in range(i*i,1000001,i):
                pr[j]=0
    for i in range(len(pr)):
        if pr[i]==1:
            prm[i]=i+prm[i-1]
        else:
            prm[i]=prm[i-1]
    return prm
 
prlist=prime()
from sys import stdin,stdout
for i in range(int(stdin.readline())):
    l,r=map(int,stdin.readline().split())
 
    stdout.write(str(prlist[r]-prlist[l-1])+"\n")
