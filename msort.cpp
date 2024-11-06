#include<bits/stdc++.h>
using namespace std;

void Merge(int a[],int l,int mid,int h)
{
	int i,j,k;
	int b[h+1];
	i=k=l;j=mid+1;
	
	if(a[i]<a[j])
		b[k++]=a[i++];
	else
		b[k++]=a[j++];
	
	//for i extra element copy in b[] array
	for(;i<=mid;i++)
		b[k++]=a[i];
	//for j extra element copy in b[] array
	for(;j<=h;j++)
		b[k++]=a[j];
	
	
	//for full b[] array copy in a[] array
	for(i=l;i<=h;i++)
		a[i]=b[i];
	
}

void Imerge(int a[],int n)
{
	int l,mid,h,p;
	
	for(p=2;p<n;p++)
	{	
		for(int i=0;i+p-1<n;i=i+p)
		{
			l=i;
			h=i+p-1;
			mid=(l+h)/2;
			Merge(a,l,mid,h);
		}		
	}
	/*
	-if extra element exists then merge that with element 
	already merged element	
	*/
	if(p/2<n)
		Merge(a,0,p/2,n-1);
}


void mRsort(int a[],int l,int h)
{
	
	if(l<h)
	{
		int mid=(l+h)/2;
		mRsort(a,l,mid);
		mRsort(a,mid+1,h);
		Merge(a,l,mid,h);
	}
}	
int main()
{
    int a[]={8,6,3,10,9,4,12,5,2,7};
    int n=sizeof(a)/sizeof(a[0]);
    //cout<<n<<endl; //10 element
    //Imerge(a,n);
	mRsort(a,0,n);
    int i;
    for(i=0;i<n-1;i++)
        cout<<a[i]<<" ";
    return 0;
}
