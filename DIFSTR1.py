for _ in range(int(input())):
	n=int(input())

	a=set()

	for x in range(n):
		x.input()
		a.add(x)

	for i in range(n+1):
		cur=''

		for b in range(n):
			cur+= '1' if i&(1<<b) else '0'

		if cur in a:
			continue

		print(cur)
		break

