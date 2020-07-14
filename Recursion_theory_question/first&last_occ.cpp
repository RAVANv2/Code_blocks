#include<bits/stdc++.h>
using namespace std;

int last_occ(int a[], int n, int key)
{
  // Base Case
  if(n==0)
    return -1;

  // Recursive Case
  int i = last_occ(a+1,n-1,key);
  if(i==-1)
  {
    if(a[0]==key)
      return 0;
    else
      return -1;
  }
  return i+1;
}


int first_occ(int a[], int n, int key)
{
  //Base Case
  if(n==0)
    return -1;

  // Recursive Case
  if(a[0]==key)
    return 0;

  int i = first_occ(a+1,n-1,key);
  if(i==-1)
    return -1;
  return i+1;
}


int main()
{
  int arr[] = {1,3,5,4,7,34,5,7,44};
  int n = sizeof(arr)/sizeof(arr[0]);
  int key = 9;

  cout<<first_occ(arr,n,key)<<endl;
  cout<<last_occ(arr,n,key)<<endl;
}
