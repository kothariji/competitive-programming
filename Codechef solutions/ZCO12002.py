from sys import stdin,stdout


def upper_bound(num,exit):

    l = 0
    r = len(exit)-1
    temp = None

    while l < r:
        mid = (l+r)//2

        if exit[mid] == num:
            return exit[mid]

        elif exit[mid] > num:
            temp = exit[mid]
            r = mid

        else:
            l = mid+1

    if exit[r] >= num:
        return exit[r]

    return temp

def lower_bound(num,entry):

    l = 0
    r = len(entry)-1
    temp = None

    while l < r:
        mid = (l + r) // 2

        if entry[mid] > num:
            r = mid

        elif entry[mid] == num:
            return entry[mid]

        else:
            temp = entry[mid]
            l = mid+1

    if entry[l] <= num:
        return entry[l]

    return temp


num_contests,num_entry,num_exit = map(int,stdin.readline().split())
contests = []

for c in range(num_contests):
    v,w = map(int,stdin.readline().split())
    contests.append([v,w])

entry = sorted(list(map(int,stdin.readline().split())))
exits = sorted(list(map(int, stdin.readline().split())))

max_tym = float('inf')

for con in range(num_contests):
    temp1 = upper_bound(contests[con][1],exits)
    temp2 = lower_bound(contests[con][0],entry)

    if temp1 and temp2:
        if (temp1 - temp2) + 1 < max_tym:
            max_tym = (temp1 - temp2) + 1


print(max_tym)
