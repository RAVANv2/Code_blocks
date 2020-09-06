#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define ll long long 

int find_ways(int x,int y)
{
	int dp[x][y];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			if(i==0 and j==0)
				dp[i][j] = 1;

			else if(i==0)
				dp[i][j] = 1;

			else if(j==0)
				dp[i][j] = 1;
			else
				dp[i][j] = dp[i-1][j]+dp[i][j-1];
		}
	}
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
		

	return dp[x-1][y-1];
}


int main()
{
	int x=4,y=4;
	cout<<find_ways(x,y);
}