#include<bits/stdc++.h>
using namespace std;

float square_root(int n)
{
    int s=0;
    int e = n;
    float ans=-1;
    while(s<=e)
    {
        int mid = (s+e)>>1;
        // If mid element is square root
        if(mid*mid==n)
            return mid;

        // if square of mid is greater than original element
        else if(mid*mid>n)
        {
            e = mid-1;
        }

        else
        {
            ans=mid;
            s = mid+1;
        }

    }
    // Floating Part
    // Brute Force
    float inc = 0.1;
    for(int times=1;times<=6;times++)
    {
      while(ans*ans<=n)
      {
        ans = ans+inc;
      }
      ans = ans-inc;
      inc = inc/10;
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<square_root(n);
}
