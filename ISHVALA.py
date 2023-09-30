t=int(input())

for _ in range(t):

	n,m=map(int,input().split())
	x,y,s=map(int,input().split())

	if x!=0:
		a=list(map(int,input().split()))
	else:
		a=[]

	if y!=0:
		b=list(map(int,input().split()))
	else:
		b=[]

	a=[0]+a+[n+1]	
	b=[0]+b+[n+1]	
	

	a.sort()
	b.sort()

	suma=0
	sumb=0

	for i in range(1,len(a)):
		suma+=(a[i]-a[i-1]-1)//s

	for i in range(1,len(b)):
		sumb+=(b[i]-b[i-1]-1)//s

	ans=suma*sumb

	print(ans)