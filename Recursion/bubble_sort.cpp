#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int *a, int n)
{
  // Base Case
  if(n==1)
    return;

  // Recursive Case
  for(int j=0;j<n-1;j++)
  {
    if(a[j]>a[j+1])
      swap(a[j],a[j+1]);
  }
  return bubble_sort(a,n-1);
}

void fast_bubble_sort(int *a, int n, int j)
{
  // Base Case
  if(n==1)
    return;

  // Recursive Case
  if(j==n-1)
    return fast_bubble_sort(a,n-1,0);

  if(a[j]>a[j+1])
    swap(a[j],a[j+1]);

  return fast_bubble_sort(a,n,j+1);
}


int main()
{
  int arr[] = {5,3,4,1};
  int n = sizeof(arr)/sizeof(arr[0]);

  cout<<"Bubble Sort by one for loop"<<endl;
  bubble_sort(arr,n);
  for(auto i:arr)
    cout<<i<<" ";

  cout<<endl;

  cout<<"Bubble sort by 0 for loop"<<endl;
  int a[] = {5,3,4,1};
  int n_ = sizeof(arr)/sizeof(arr[0]);

  fast_bubble_sort(a,n_,0);
  for(auto i:arr)
    cout<<i<<" ";
}
