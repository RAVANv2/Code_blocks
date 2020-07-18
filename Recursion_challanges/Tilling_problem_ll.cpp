#include<bits/stdc++.h>
using namespace std;

int find_ways(int n,int m)
{
    // Base Case
    if(n<0 or m<0)
        return 0;
    if(n==0 or m==0)
        return 1;


    int left = find_ways(n-1,m);
    int right = find_ways(n-m,m);

    return left+right;

}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        cout<<find_ways(n,m)<<endl;
    }
}
