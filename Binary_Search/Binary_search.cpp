#include<bits/stdc++.h>
using namespace std;

int binary_search(int *a, int s, int e,int key)
{
    if(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid]==key)
            return mid;

        if(a[mid]>key)
            return binary_search(a,s,mid,key);
        else
        {
            return binary_search(a,mid+1,e,key);
        }

    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int key = 7;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<binary_search(arr,0,n-1,key);
}
