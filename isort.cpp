#include<bits/stdc++.h>
using namespace std;

void ssort(int a[],int n)
{
	int x,j;
	for(int i=1;i<n;i++)
	{	
		j=i-1;
		x=a[i];
		while(j>-1 & a[j]>x)
		{
			//a[j+1]=a[j];
			swap(a[j+1],a[j]);
			j--;
				
		}
		a[j+1]=x;
	}		
	cout<<"o/p: ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	
}

int main()
{
	
	int arr[]={8,5,7,3,2};
	
	ssort(arr,5);
	
	return 0;	
}	