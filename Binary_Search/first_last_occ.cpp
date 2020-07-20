#include<bits/stdc++.h>
using namespace std;

int ans=-1;

int first_occ(int *a,int s,int e,int key)
{
    int ans = -1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid]==key)
        {
            ans=mid;
            e = mid-1;
        }

        else if(a[mid]>key)
        {
            e = mid-1;
        }

        else if(a[mid]<key)
        {
            s = mid+1;
        }
    }
    return ans;
}

int last_occ(int *a,int s,int e,int key)
{
  int ans=-1;
  while(s<=e)
  {
    int mid = (s+e)/2;
    if(a[mid]==key)
    {
      ans = mid;
      s = mid+1;
    }
    else if(a[mid]>key)
    {
      e = mid-1;
    }

    else if(a[mid]<key)
    {
      s = mid+1;
    }
  }
  return ans;
}


int main()
{
    int arr[] = { 1, 2, 3,8,8,8,8,9,9,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 8;

    cout<<first_occ(arr,0,n-1,key)<<endl;
    cout<<last_occ(arr,0,n-1,key);
}
