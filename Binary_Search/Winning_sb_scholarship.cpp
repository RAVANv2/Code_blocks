#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M,X,Y;
    cin>>N>>M>>X>>Y;

    int s = 0;
    int e = N;

    int ans=0;

    while(s<=e)
    {
        int mid = (s+e)>>1;

        if(mid*X <= (M + (N-mid)*Y))
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }

    }

    cout<<ans<<endl;

}
