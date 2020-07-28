#include<bits/stdc++.h>
using namespace std;

bool canWeMadeParathe(int *cook_arr,int cook,int parathe,int mid)
{
    int cnt=0;
    int parathe_count=0;
    for(int i=0;i<cook;i++)
    {
        int sum=0;
        for(int p=1;p<=parathe;p++)
        {
            if((sum + cook_arr[i]*p) > mid)
            {
                break;
            }
            else
            {
                sum += cook_arr[i]*p;
                parathe_count++;
                if(parathe_count>=parathe)
                    return true;
            }
        }
    }
    return false;
}

int main()
{
    int parathe=10;
    int cook=4;
    int cook_arr[cook]={1,2,3,4};

    int s=0;
    int e = 55*cook_arr[0];
    int ans=-1;

    while(s<=e)
    {
        int mid = (s+e)>>1;

        bool parathe_ban_gaye = canWeMadeParathe(cook_arr,cook,parathe,mid);

        if(parathe_ban_gaye)
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    cout<<ans<<endl;
}
