#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int s, int e)
{
	int mid = (s+e)>>1;
	int i=s-1;
	int j=s;

	int pivot = a[e];

	for( ; j<=e-1;j++)
	{
		if(a[j]<=pivot)
			swap(a[++i],a[j]);
	}
	swap(a[i+1],a[e]);
	return i+1;
}

int partition_r(int a[],int s,int e)
{
	int r = (s+e)>>1;
	swap(a[r],a[r]);
	return partition(a,s,e);
}



void quicksort(int a[],int s,int e)
{
	// Base Case
	if(s>=e)
		return;

	int p = partition_r(a,s,e);

	// Pass two array index smaller than p and greater than p
	quicksort(a,0,p-1);
	quicksort(a,p+1,e);

}

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	quicksort(arr,0,n-1);

	for(auto i:arr)
		cout<<i<<" ";
}
