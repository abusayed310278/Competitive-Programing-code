#include<bits/stdc++.h>
using namespace std;

void ssort(int arr[],int n)
{
	int i,j,k;
	
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=k=i;j<n;j++)
		{
			if(arr[j]<arr[k])
				k=j;		
		}
		
		swap(arr[i],arr[k]);
	}		
	cout<<"o/p: ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	
	
}

int main()
{
	
	int arr[]={8,6,3,2,5,4};
	
	ssort(arr,6);
	
	return 0;	
}	