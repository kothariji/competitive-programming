n=int(input())
l=list(map(int,input().split()))
ans=[-1]*n
stack=[0]
for i in range(1,n):
    while stack:
        if (l[stack[-1]]<l[i]):
            ans[i]=l[stack[-1]]
            break
        else:
            stack.pop()
    stack.append(i)
print(" ".join(map(str,ans)))
