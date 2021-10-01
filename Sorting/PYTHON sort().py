def sortSecond(val):
    return val[1]

numbers1 = [1, 3, 4, 2,7,5,9,8,0]
numbers2 =numbers1
numbers1.sort()
print("sorted in ascending order:")
print(numbers1)
#reverse stands for descending order
numbers2.sort(reverse=True)
print("sorted in descending order")
print(numbers2)
list1 = [(1, 2), (3, 3), (1, 1)]
# sorts the array in ascending according to
# second element
print("sorts the array in ascending according to second element")
list1.sort(key=sortSecond)
print(list1)

# sorts the array in descending according to
# second element
print("sorts the array in ascending according to second element but descending order for the 1st element ")
list1.sort(key=sortSecond, reverse=True)
print(list1)


