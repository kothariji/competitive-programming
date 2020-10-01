
# Problem Link-https://codeforces.com/contest/1385/problem/C

# Code

for _ in range((int)(input())):
    n=(int)(input())
    a=list(map(int,input().split()))
    pos = n-1
    while pos>0 and a[pos-1]>=a[pos]:
        pos-=1
    while pos>0 and a[pos-1]<=a[pos]:
        pos-=1
    print(pos)

# Sample Input 
# 5
# 4
# 1 2 3 4
# 7
# 4 3 3 8 4 5 2
# 3
# 1 1 1
# 7
# 1 3 1 4 5 3 2
# 5
# 5 4 3 2 3

# Sample Output
# 0
# 4
# 0
# 2
# 3
