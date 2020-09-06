#include<bits/stdc++.h>
#include<cmath>
using namespace std;

#define ll long long 

int find_min_cost_b_u(vector<vector<int>> cost,int row,int col)
{
	int dp[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(i==0 and j==0)
				dp[i][j] = cost[0][0];

			else if(i==0)
				dp[i][j] = cost[i][j] + dp[i][j-1];

			else if(j==0)
				dp[i][j] = cost[i][j] + dp[i-1][j];

			else
				dp[i][j] = cost[i][j] + min(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[row-1][col-1];
}



int main()
{
	int row = 3,col=3;
	vector<vector<int>> cost{
		{1,5,2},
		{7,1,1},
		{8,1,3}
	};

	cout<<find_min_cost_b_u(cost,row,col);
	
}