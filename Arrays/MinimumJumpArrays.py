#A = [1, 3, 6, 3, 2, 3, 6, 8, 9, 5]
A = [2, 1, 1]
#A = [2, 3, 1, 1, 4]
'''
counter = 0
mid_max = A[0]
for i in range(1, n-1):
    if mid_max >= n-1:
        counter += 1
        break
    mid_max = max(A[i+1:A[i]+1])
'''
counter = 0
mid_max = A[0]
n = len(A)
i = 0
while i < n:
    #print(mid_max, ":",n-i)
    print(A[i] , ":", n-i-1)
    if A[i] >= n-i-1:
        counter += 1
        break
    if len(A[i:A[i]]) != 0:
        mid_max = max(A[i:A[i]])
        i = mid_max
        print("MAX: ", mid_max)
        counter += 1
print(counter)
