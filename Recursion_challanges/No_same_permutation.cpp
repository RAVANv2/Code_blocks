#include<bits/stdc++.h>
using namespace std;

set<int> s;

void generate_permutation(int *arr,int i,int n)
{
    // Base Case
    if(i==n)
    {
        for(int j=0;j<=n;j++)
            s.insert(arr[j]);
        return;
    }

    // Recursive Case
    for(int k=0;k<=n;k++)
    {
        swap(arr[i],arr[k]);
        generate_permutation(arr,i+1,n);

        // Backtracking
        swap(arr[i],arr[k]);
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    generate_permutation(arr,0,n-1);

    for(auto i:s)
      cout<<i<<endl;

}
