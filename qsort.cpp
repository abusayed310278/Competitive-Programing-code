#include<bits/stdc++.h>
using namespace std;


int partition(int arr[],int l,int h)
{
	
	int pivot=arr[l];
	int i=l,j=h;
	
	
	do{
		do{i++;}while(arr[i]<=pivot);	
		do{j--;}while(arr[j]>pivot);
		if(i<j)
			swap(arr[i],arr[j]);
		
	
	}while(i<j);
	swap(arr[l],arr[j]);
	
	return j;	
	
	
}
void qsort(int arr[],int l,int h)
{
	int j;	
	if(l<h)
	{
		j=partition(arr,l,h);	
		qsort(arr,l,j);
		qsort(arr,j+1,h);
		
		
	}	
}	

int main()
{
	
	int arr[]={8,6,3,10,9,4,12,5,2,7,INT32_MAX};
	int n=sizeof(arr)/sizeof(arr[0]);
	//cout<<n;
	qsort(arr,0,n-1);
	//show(arr,n);
	cout<<"show o/p: ";
	for(int i=0;i<n-1;i++)
		cout<<arr[i]<<" ";	
	return 0;	
}	