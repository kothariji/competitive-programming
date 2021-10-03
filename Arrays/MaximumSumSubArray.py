# Kadane's Algorithm
# Question: MaxSumSubArray Problem:
def maxSumSubArray(arr):
	if len(arr) == 1:
		return arr[0]
	max_value = float('-inf')
	curr_value = 0
	for i in range(len(arr)):
		curr_value += arr[i]
		if curr_value > max_value:
			max_value = curr_value
		if curr_value < 0:
			curr_value = 0
	return max_value

# Test 1
arr = [1,2,4,5]
print(maxSumSubArray(arr))

# Test 2
arr = [-5, 4, 6, -3, 4, -2]
print(maxSumSubArray(arr))
