# solution to https://www.codechef.com/problems/CRDGAME3
for _ in range(int(input())):
    c, r = map(lambda x: int(x)//9 if int(x) % 9 == 0 else (int(x)//9)+1, input().split())
    if c>=r:
        print(1, r)
    else:
        print(0, c)