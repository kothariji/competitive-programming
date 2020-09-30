for _ in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	b = list(map(int, input().split()))
	d = 0
	w = 0
	for i in range(n):
		d += a[i] - b[i]

		if d == 0 and a[i] == b[i]:
			w += a[i]
	
	print(w)				
