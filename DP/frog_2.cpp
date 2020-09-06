#include<bits/stdc++.h>
#include<cmath>
using namespace std;

#define ll long long

int min_cost_b_u(vector<int> cost,int n,int k)
{
	vector<int> dp(n+1);
	dp[1] = 0;

	for(int i=2;i<=n;i++){
	    dp[i] = INT_MAX;
		for(int j=1; j<=k; j++)
		{
			dp[i] = min(dp[i],abs(cost[i]-cost[i-j]) + dp[i-j]);
		}
	}
	for(auto i:dp)
	    cout<<i<<" ";
	    cout<<"\n";
	return dp[n];
} 


int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> cost(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>cost[i];
	}

	cout<<min_cost_b_u(cost,n,k);
}