#include<bits/stdc++.h>
using namespace std;
long long int fact(int n)
{
    long long int res=1;
    for(int i=1;i<=n;i++)
        res*=i;
    return res;
}

long long int combination(int n, int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}


long long int friend_fun(int n)
{
    // Basae Case
    if(n==0 or n==1)
        return 1;

    // Recursive Case:
    return friend_fun(n-1) + (n-1)*friend_fun(n-2);
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<friend_fun(n)<<endl;
    }
}
