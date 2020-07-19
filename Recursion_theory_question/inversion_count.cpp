#include<bits/stdc++.h>
using namespace std;

int merge(int *a, int s, int e)
{
  int i = s;
  int mid = (s+e)/2;
  int j = mid+1;
  int k = s;

  int temp[100];
  int cnt = 0;

  while(i<=mid && j<=e)
  {
    if(a[i]<=a[j])
      temp[k++] = a[i++];
    else
    {
      temp[k++] = a[j++];
      cnt += mid-i+1;
    }
  }

  while(i<=mid)
    temp[k++] = a[i++];

  while(j<=e)
    temp[k++] = a[j++];

  for(int i=s; i<=e;i++)
    a[i] = temp[i];

  return cnt;
}


int inversion_count(int *a, int s, int e)
{
  // Base Case
  if(s>=e)
    return 0;

  int mid = (s+e)/2;

  int x = inversion_count(a,s,mid);
  int y = inversion_count(a,mid+1,e);
  int z = merge(a,s,e);

  return x+y+z;
}


int main()
{
  int arr[] = {1,5,2,6,3,0};
  int n = sizeof(arr)/sizeof(arr[0]);

  cout<<inversion_count(arr,0,n-1)<<endl;
}