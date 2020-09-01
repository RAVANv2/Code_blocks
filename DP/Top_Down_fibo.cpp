#include<bits/stdc++.h>
using namespace std;

int fibo(int n,int dp[])
{
	if(n==0 or n==1)
		return n;


	if(dp[n]!=0){
		return dp[n];
	}

	int ans;
	ans = fibo(n-1,dp) + fibo(n-2,dp);

	return dp[n] = ans;

}

int main()
{
	int n = 12;
	int dp[1000] = {0};

	cout<<fibo(n,dp);
}