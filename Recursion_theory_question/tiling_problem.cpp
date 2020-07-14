#include<bits/stdc++.h>
using namespace std;

int ways(int n)
{
    // Base case
    if(n<=4)
        return 1;

    // Recursive case
    int left = ways(n-1);
    int right = ways(n-4);

    return left+right;
}

int main()
{
    int n;
    cin>>n;

    cout<<ways(n)<<endl;
}
