t = int(input())
ans = 0
while t:
    t -= 1
    n = int(input())
    ans += n
ans = str(ans)
for i in range(10):
    print(ans[i],end = "")