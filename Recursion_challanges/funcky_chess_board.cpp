#include<bits/stdc++.h>
using namespace std;

int n,board[10][10],sum,ans;

void funcky_chess(int i, int j,int cnt)
{
  if(i<0 || i>=10 || j<0 || j>=10 || board[i][j] == 0)
      return;

    board[i][j]=0;
    ans = max(ans,cnt+1);

    // Checking all 8 steps

    funcky_chess(i-2,j-1,cnt+1);
    funcky_chess(i-2,j+1,cnt+1);
    funcky_chess(i-1,j-2,cnt+1);
    funcky_chess(i-1,j+2,cnt+1);
    funcky_chess(i+1,j-2,cnt+1);
    funcky_chess(i+1,j+2,cnt+1);
    funcky_chess(i+2,j-1,cnt+1);
    funcky_chess(i+2,j+1,cnt+1);

    // Backtracking
    board[i][j]=1;
}

int main()
{
    int n;
    cin>>n;

    sum = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>board[i][j];
            if(board[i][j])
                sum++;
        }
    }

    ans=0;

    funcky_chess(0,0,0);
    cout<<sum-ans<<endl;

}
