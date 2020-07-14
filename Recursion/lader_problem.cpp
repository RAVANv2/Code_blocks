#include<bits/stdc++.h>
using namespace std;

int count_ways(int lader,int ways)
{
    // Base case
    if(lader==0)
        return 1;

    if(lader<0)
      return 0;

    // Recursive case

    // Taking care of jump ways
    int ans=0;

    // Submission of all jump ways
    for(int i=1;i<=ways;i++)
      ans+=count_ways(lader-i,ways);

    return ans;
}



int main()
{
    int lader,ways;
    cin>>lader>>ways;

    cout<<count_ways(lader,ways)<<endl;
}
