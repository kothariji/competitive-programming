mod, maxn, cur, ans, r = 998244353, 1000005, 10, 0, 0
dp, x, a = [0] * maxn, [0] * maxn, [0] * 12,
x[1] = 1
dp[0] = 1
for i in range(2 , maxn):
    x[i] = mod - (mod // i) * x[mod % i] % mod
n, k = map(int, input().split())
n = n // 2
p = [0] * k
for u in map(int, input().split()):
    cur = min(cur, u)
    p[r] = u
    r += 1
for i in range(k):
    a[p[i] - cur] = 1
for i in range(n * 10 + 1):
    sm,  j = 0, 0
    while j < min(10, i + 1):
        sm += dp[i-j] * (j+1) * a[j+1] * n % mod
        j += 1
    j = 1
    while j < min(10, i + 1):
        sm -= dp[i-j+1] * (i-j+1) * a[j]
        j += 1
    ans = (ans + dp[i] * dp[i]) % mod
    dp[i+1] = sm * x[i+1] % mod
print(ans % mod)
