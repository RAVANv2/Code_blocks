#include<bits/stdc++.h>
using namespace std;

int find_pivot(int a[],int s,int e)
{
	// Base Case
	if(s>=e)
		return -1;

	int mid = (s+e)>>1;

	// Condition 1 if mid-1 is pivot element
	if(mid>s and a[mid]<a[mid-1])
		return mid-1;

	// condition2 if mid is pivot element
	if(mid<e and a[mid]>a[mid+1])
		return mid;

	// Upper both condition is false than check for unsorted array
	// For left array
	if(a[mid]<=a[s])
		return find_pivot(a,s,mid-1);
  // For right array
  else
    return find_pivot(a,mid+1,e);

	return -1;
}


int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<<find_pivot(arr,0,n-1)<<endl;
}
