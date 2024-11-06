#include<bits/stdc++.h>
using namespace std;

void ssort(int a[],int n)
{
	int i,j,x,gap;
	
	for(gap=n/2;gap>1;gap/=2)
	{	
		for(i=gap;i<n;i++)
		{
			j=i-gap;
			x=a[i];
			
			while(j>-1 && a[j]>x)
			{
				//swap(a[j+gap],a[j]);
				a[j+gap]=a[j];
				j=j-gap;
			}
			a[j+gap]=x;
		}
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

}


int main()
{
	
	int arr[]={8,5,7,3,2};
	
	ssort(arr,5);
	
	return 0;	
}	