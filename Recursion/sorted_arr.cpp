#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[], int n)
{
  // Base Case
  if(n==1 or n==0)
    return true;

  // Recursive Case
  if(a[0]<a[1] and isSorted(a+1, n-1))
    return true;
  else
    return false;
}


int main()
{
  int arr[] = {1,2,3,4,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);

  cout<<isSorted(arr,n);
  return 0;
}
