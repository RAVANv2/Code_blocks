#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[], int l, int r,int key)
{
  if(l<=r)
  {
    int mid = l+(r-1)/2;

    //Base Case
    if(a[mid]==key)
      return mid;

    // Recursive Case
    if(a[mid]>key)
      return binary_search(a,l,mid-1,key);

    else
      return binary_search(a,mid+1,r,key);
  }
  return -1;
}



int main()
{
  int arr[] = {1,2,3,4,5,6,7,10,13};
  int n = sizeof(arr)/sizeof(arr[0]);

  int key = 13;
  int ans =  binary_search(arr,0,n,key);
  cout<<ans;
}
