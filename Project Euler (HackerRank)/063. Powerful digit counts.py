n = int(input())

for i in range(1,20):
    j=1
    while 1:
        power = i**j
        length = len(str(power))
        if length == j :
            j+=1
            if length == n:
                print(power)
        else:
            break
