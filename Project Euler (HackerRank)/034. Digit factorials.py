from math import factorial
sumi=0
n = int(input())
for i in range(10,n):
    f=0
    for j in str(i):
        f+=factorial(int(j))
    if f%i==0:
        sumi+=i
print(sumi)
