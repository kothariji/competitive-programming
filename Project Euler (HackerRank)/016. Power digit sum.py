lookup = []
lookup.append(1);
for i in range((10**4)+1):
    lookup.append(lookup[i]*2)

answer = []

for i in lookup:
    anslist = [int(char) for char in str(i)] 
    answer.append(sum(anslist))

t = int(input())
while t:
    t -= 1
    n = int(input())
    print(answer[n])
