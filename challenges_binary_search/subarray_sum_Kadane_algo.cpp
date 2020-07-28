#include<bits/stdc++.h>
using namespace std;

// Kadane's Algorithm
int maxSum(int a[],int n)
{
    int max_sum_so_far =0;
    int max_ending_here = 0;

    for(int i=0;i<=n;i++)
    {
        max_ending_here = max_ending_here + a[i];

        if(max_ending_here < 0)
            max_ending_here = 0;

        if(max_sum_so_far < max_ending_here)
            max_sum_so_far = max_ending_here;

    }
    return max_sum_so_far;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin>>arr[i];

        cout<<maxSum(arr,n-1)<<endl;
    }
}
