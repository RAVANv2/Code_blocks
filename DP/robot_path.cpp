#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int dp[1001][1001];

int robot_path(int row,int col)
{

	for(int i=1;i<=row+1;i++)
	{
		for(int j=1;j<=col;j++)
		{
			if(i==1 and j==1)
				dp[i][j] = 1;
			else if(i==1 and dp[i][j]!=0)
				dp[i][j] = dp[i][j-1];
			else if(j==1 and dp[i][j]!=0)
				dp[i][j] = dp[i-1][j];
			else if(dp[i][j]==0)
				continue;
			else
				dp[i][j] = dp[i-1][j]+dp[i][j-1];
		}
	}
    
    	
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
	if(dp[row][col]==0)
		return 0;
	return dp[row][col];
}

int main()
{
	int row, col;
	cin>>row>>col;
	int cross;
	cin>>cross;

	memset(dp,-1,sizeof(dp));

	for(int i=0;i<cross;i++)
	{
		int x,y;
		cin>>x>>y;
		dp[x][y] = 0;
	}
	

	cout<<robot_path(row,col);
}