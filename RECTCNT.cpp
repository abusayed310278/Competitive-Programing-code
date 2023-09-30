def solve(n):
	
	points=[]
	for _ in range(n):
		x,y=map(int,input().split())
		points.append([x,y])
	points.sort()

	d={}

	for i in range(n-1):
		x1,y1=points[i][0],points[i][1]
		x2,y2=points[i+1][0],points[i+1][1]

		if x1==x2:
			if (y1,y2) not in d:
				d[(y1,y2)]=0
			d[(y1,y2)]+=1

	ans=0
	for k,v in d.items():
		ans+=v*(v-1)//2

	print(ans)


while True:

	n=int(input())
	if n==0:
		break
	solve(n)