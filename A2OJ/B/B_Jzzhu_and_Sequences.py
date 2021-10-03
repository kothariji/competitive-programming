v1 = [0, 0, 0, 0, 0, 0, 0]
MOD = 1000000007
l1 = list(map(int, input().split()))
v1[1] = l1[0]
v1[2] = l1[1]
k = int(input())
v1[3] = v1[2] - v1[1]
v1[4] = v1[3] - v1[2]
v1[5] = v1[4] - v1[3]
v1[6] = v1[5] - v1[4]
v1[0] = v1[6]
if (k < 7):
    print(v1[k] % MOD)
else:
    print(v1[k % 6] % MOD)
