for _ in range(int(input())):
	n = int(input())
	s = list(map(int,input().split()))

	c5 = 0
	c10 = 0
	f = 1

	if s[0] != 5 :
		print("NO")
		f = 0
	else:	
		for i in range(n):
			if s[i] == 5 :
				c5 += 1
			elif s[i] == 10 : 
				if c5 > 0 :
					c10 += 1
					c5 -= 1
				else :
					print("NO")
					f = 0
					break
			else:
				if c10 > 0 :
					c10 -= 1 
				elif c5 > 1 :
					c5 -= 2 
				else:
					print("NO")
					f = 0
					break 
	if 	f :
		print("YES")
