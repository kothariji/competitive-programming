for _ in range(int(input())):
	a,b=map(int,input().split())
	x,y=0,0
	if(a%9!=0):
		x=a//9+1
	else:
		x=a//9
	if(b%9!=0):
		y=b//9+1
	else:
		y=b//9	
			

	if(x<y):
		print(0,x)
	else:
		print(1,y)	
