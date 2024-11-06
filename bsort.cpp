#include<bits/stdc++.h>
using namespace std;

void ssort(int arr[],int n)
{
	int flag;
	for(int i=0;i<n-1;i++)
	{	
		flag=0;
		for(int j=i+1;j<n-i-1;j++)
		{	
			if(arr[j+1]>arr[j])
			{
				swap(arr[j],arr[j]);
				flag=1;
			}
		}
		if(flag==0)break;
	}		
	cout<<"o/p: ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	
	
}

int main()
{
	
	int arr[]={8,5,7,3,2};
	//int n=sizeof(arr)/arr[0];
	//cout<<n<<endl;
	ssort(arr,5);
	
	return 0;	
}	