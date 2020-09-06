#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int min_cost_t_d(int n,int cost[],int dp[])
{
	if(n==1 or n<1)
		return 0;

	if(dp[n]!=0)
		return dp[n];

	dp[n] = min(abs(cost[n]-cost[n-1])+min_cost_t_d(n-1,cost,dp), abs(cost[n]-cost[n-2])+min_cost_t_d(n-2,cost,dp));
	return dp[n];
}


int min_cost_b_u(int n,int cost[])
{
	int dp[n+1] = {0};
	dp[1] = 0;

	for(int i=2;i<=n;i++)
	{
		int opt1 = abs(cost[i]-cost[i-1]) + dp[i-1];
		int opt2 = (i==2) ? INT_MAX:abs(cost[i]-cost[i-2]) + dp[i-2];
		dp[i] = min(opt1,opt2);
	}
	return dp[n];
}



int main()
{
	int n;
	cin>>n;
	int cost[n];
	for(int i=1;i<=n;i++)
		cin>>cost[i];

	int new_dp[n+1] = {0};

	cout<<min_cost_b_u(n,cost);
	cout<<"\n";
	cout<<min_cost_t_d(n,cost,new_dp);
}