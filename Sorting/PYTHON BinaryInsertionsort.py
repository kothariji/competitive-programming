# Implement Insertion Sort with the idea that the location of the next element in the sorted portion is found using binary search


def binarySearchPos(theValues, target):
    # Start with the entire sequence of elements.
    low = 0
    high = len(theValues) - 1

    mid = (high + low) // 2

    # Repeatedly subdivide the sequence in half until the target is found.
    while low <= high:
        # Find the midpoint of the sequence.
        mid = (high + low) // 2

        # Does the midpoint contain the target?
        if theValues[mid] == target:
            return mid

        # Or does the target precede the midpoint?
        elif target < theValues[mid]:
            high = mid - 1

        # Or does it follow the midpoint?
        else:
            low = mid + 1

        # If the sequence cannot be subdivided further, we're done.

    return low


def insertionSort(theSeq):
    '''
    The Logic for Binary insertion sort is as follows:
    we already know that the first element is sorted
    than we try to find the position of the next element in the sorted portion using binary search
    once the index is found we shift the list and insert the element at its place.
    '''
    n = len(theSeq)
    for i in range(1, n):
        value = theSeq[i]
        pos = binarySearchPos(theSeq[:i], value)
        theSeq = theSeq[:pos] + [value] + theSeq[pos:i] + theSeq[i+1:] #inseritng the value at the correct position and shifting the rest of the list 
        theSeq[pos] = value
    return theSeq

#Examples
print("sorted array is :")
print(insertionSort([1, 2, 5, 4, 3]))
print("sorted array is :")
print(insertionSort([6, 5, 4, 3, 2, 1]))


