#include<bits/stdc++.h>
using namespace std;

void csort(int a[],int n,int m)
{
	int c[m+1]={0};
	for(int i=0;i<n;i++)
		c[a[i]]++;
	
	
	//c[] array element copy to a[] array
	int i=0,j=0;
	while(i<m+1)
	{	
		if(c[i]>0)
		{
			a[j++]=i;
			c[i]--;
		}
		else
			i++;
	}	
	
	//sorted element o/p from a[] array
	for(int i=0;i<n;i++)
        cout<<a[i]<<" ";	
}

int main()
{
    int a[]={6,3,9,10,15,6,8,12,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    
	int m=*max_element(a, a + n);
	//cout<<m<<endl;
	
	csort(a,n,m+1);
	//int i;
    /*
	for(i=0;i<n;i++)
        cout<<a[i]<<" ";
	*/
    return 0;
}
