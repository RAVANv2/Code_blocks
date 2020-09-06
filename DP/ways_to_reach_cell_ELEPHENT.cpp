#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int min_ways(int x,int y){
	int dp[x][y];

	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(i==0 and j==0)
				dp[i][j] = 1;
			else if(i==0){
				int ans=0;
				for(int k=0;k<j;k++)
					ans += dp[0][k];
				dp[i][j] = ans;
			}
			else if(j==0){
				int ans=0;
				for(int k=0;k<i;k++)
					ans += dp[k][0];
				dp[i][j] = ans;
			}
			else{
				int ans=0;
				for(int k=0;k<j;k++)
				 	ans += dp[i][k];
				dp[i][j] = ans + dp[i-1][j];
			}
		}
	}
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
	return dp[x-1][y-1];
}



int main()
{
	int x=3,y=5;
	cout<<min_ways(x,y);
}