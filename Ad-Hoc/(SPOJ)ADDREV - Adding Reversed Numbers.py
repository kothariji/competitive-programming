# your code goes here
t = int(input())
while t:
	t -= 1
	num1, num2 = [ int(s[::-1]) for s in input().split()]
	num3 = num1 + num2
	num3 = str(num3)[::-1]
	flag = 0
	for i in num3:
		if flag != 1:
			if i != "0":
				flag = 1
				print(i, end = "")
		else:		
			print(i, end = "")
	print()	