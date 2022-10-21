#Read the number of test cases.
T = int(input())

for _ in range(T):

	# Read integers a and b.
	(a, b) = map(int, input().split(' '))

	# Compute the answer
	# % operator returns the remainder	
	ans = a%b
	print(ans)