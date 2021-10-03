import os
import sys
import statistics

def quickSort(arr):

    # num_list < median
    left = []

    # num_list > median
    right = []

    # Recursion stop condition
    if len(arr) <= 1:
        return arr

    # get a median in array
    median = int(statistics.median(arr))

    # Count the number of medians
    medianFlg = 0

    for element in arr:
        if element < median:
            left.append(element)
        elif element > median:
            right.append(element)
        else:
            medianFlg += 1

    left = quickSort(left)
    right = quickSort(right)

    return left + [median] * medianFlg + right

if __name__ == "__main__":

    num_list = []
    for l in sys.stdin:
        num_list.append(int(l))
    print(num_list)
    print(quickSort(num_list))
