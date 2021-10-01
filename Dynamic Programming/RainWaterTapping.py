# Rain water Trapping Problem

def rWTP(arr):
	left = []
	right = []
	n = len(arr)
	left.append(arr[0])
	right = [0 for i in range(n)]
	right[n-1] = arr[n-1]
	for i in range(1, n):
	    left.append(max(left[i-1],arr[i]))
	for j in range(n-2, -1, -1):
	    right.append(max(right[j+1], arr[j]))
	
	ans = 0 
	for i in range(n):
		ans += max(left[i], right[i]) - arr[i]
	
	return ans
	
# Test 1:
arr = [3, 1, 2, 4, 0, 1, 3, 2]
print(rWTP(arr))
