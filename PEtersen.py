def solve(start,pos):
	cur=(start,pos)
	n=len(s)
	cur_ans=[pos]
	flag=True

	for i in range(1,n):
		al=s[i]
		mark=None

		for node in g[cur]:
			new_al,pos=node

			if al==new_al:
				mark=(new_al,pos)
		if mark==None:
			flag=False
			break
		else:
			cur=mark
			alp,pos=mark
			cur_ans.append(pos)

	if flag:
		pass:
	else:
		cur_ans=[]

	return cur_ans		


t=int(input())
for _ in range(t):

	s=input();
	g={}
	
	g[("A",0)]=[("B",1),("E",4),("A",5)]



	pos={"A":[0,5],"B":[1,6],"C":[2,7],"D":[3:8],"E":[4,9]}
	ans1,ans2=None,None

	start=s[0]
	position=pos[start][0]
	ans1=solve(start,position)
	position=pos[start][1]
	ans2=solve(start,position)

	if ans1 or ans2:
		final=[]

		if ans1:
			final.append(''.join([str(i) for i in ans1])
		if ans2:
			final.append(''.join([str(i) for in ans2]))

		final.sort()
		print(final[0])
	else:
		print(-1)	