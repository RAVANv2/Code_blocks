#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int res = 1;
    for(int i=2;i<=n;i++)
        res *=i;
    return res;
}

int combination(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}


int ways(int n)
{
    // Base Case:
    if(n==0 or n==1)
        return 1;

    // Recursive case:
    int single = ways(n-1);
    int paired = combination(n-1,1)*ways(n-2);

    return single+paired;
}


int main()
{
    int n;
    cin>>n;

    cout<<ways(n)<<endl;
}
