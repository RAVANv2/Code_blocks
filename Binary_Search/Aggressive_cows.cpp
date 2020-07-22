#include<bits/stdc++.h>
using namespace std;

bool canWePlaceCow(int stalls[],int n,int cow,int mid)
{
    int last_cow = stalls[0];
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(stalls[i]-last_cow>=mid)
        {
            last_cow = stalls[i];
            cnt++;
            if(cnt==cow)
                return true;
        }
    }
    return false;
}

int main()
{
    int stalls[] = {1,2,4,8,9}; // Sorted stalls
    int n = sizeof(stalls)/sizeof(stalls[0]);
    int cow = 3;

    // Binary search
    int s = 0;
    int e = stalls[n-1]-stalls[0];
    int ans=0;
    while(s<=e)
    {
        int mid = (s+e)>>1;
        bool cowRakhPaye = canWePlaceCow(stalls,n,cow,mid);
        if(cowRakhPaye)
        {
            ans=mid;!
            s=mid+1;
        }
        else
        {
          e = mid-1;
        }
    }

    cout<<ans<<endl;
    return 0;
}
