# Popular Question asked by Norton in On campus Test
# Add 5 to a given number so that it will become maximum
# For eg: input number: 268
# Output: 5268
# This program will work for both the positive and negative integers

def solution(N):
    negative = False

    if N<0:
        negative = True
        N = N * -1

    a = []
    while N!=0:
        v = N%10
        N = int(N/10)
        a = [v] + a
    if(len(a)==0):
        a = [0]
    inserted = False
    for i in range(0, len(a)):
        if(not negative and a[i]<5) or (negative and a[i]>5):
            a = a[0:i] + [5] + a[i:]
            inserted = True
            break
    if not inserted:
        a = a + [5]
    N=0
    for i in range(0, len(a)):
        N = N * 10 + a[i]

    if negative:
        N = N*-1

    return N

print(solution(int(input())))
