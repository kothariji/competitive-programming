fact = [1]*1000
for i in range(1,1000):
    fact[i] = i*fact[i-1]

t = int(input())
while t:
    t -= 1
    n = int(input())
    ans = str(fact[n])
    sumi = 0
    for i in ans:
        sumi += int(i)
    print(sumi)
