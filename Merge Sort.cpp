#include<iostream>
using namespace std;

void merge(int a[],int l,int m,int r)
{
	int size_l=m-l+1,size_r=r-m;
	int left[size_l],right[size_r];
	int i,j;
	
	for(i=l;i<=m;++i)
	left[i-l]=a[i];
	
	for(i=m+1;i<=r;++i)
	right[i-m-1]=a[i];
	
	int k=l-1;
	
	for(i=0,j=0;i<size_l && j<size_r;)
	{
		if(left[i]<right[j])
			a[++k]=left[i++];	
		else
			a[++k]=right[j++];
	}
	
	if(i==size_l)
		{
			while(j<size_r)
			a[++k]=right[j++];
		}
	else
		{
			while(i<size_l)
			a[++k]=left[i++];	
		}
}


void mergesort(int a[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		
		mergesort(a,l,m);
		mergesort(a,m+1,r);	
		
		merge(a,l,m,r);
	}
}


int main()
{
	int n,i;
	
	cin>>n;
	
	int a[n];
	
	for(i=0;i<n;++i)
	cin>>a[i];
	
	mergesort(a,0,n-1);
	
	for(i=0;i<n;++i)
	cout<<a[i]<<" ";
		
	return 0;	
}
