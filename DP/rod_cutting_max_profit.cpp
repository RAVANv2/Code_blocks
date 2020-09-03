#include<bits/stdc++.h>
using namespace std;

#define ll long long

int dp[100];


int profit_t_d(int n,int cost[])
{
	if(n==0)
		return 0;

  if(dp[n]!=0)
    return dp[n];

	int best = 0;
	for(int i=1;i<=n;i++)
	{
		int ans = cost[i] + profit_t_d(n-i,cost);
		best = max(best,ans);
	}
 	dp[n] = best;
	return dp[n];
}

int profit_b_u(int n,int cost[])
{
	int dp[100] = {0};
	
	for(int len=1;len<=n;++len)
	{
		int best = 0;
		for(int k=1;k<=len;++k)
		{
			best = max(best,cost[k] + dp[len-k]);
		}
		dp[len] = best;
	}	
	return dp[n];
}

int main()
{
	int len;
	cin>>len;
	int cost[len];

	for(int i=1;i<=len;i++)
		cin>>cost[i];

	cout<<profit_t_d(len,cost)<<endl;
	cout<<profit_b_u(len,cost)
}
