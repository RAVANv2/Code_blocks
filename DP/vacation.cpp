#include <iostream>
using namespace std;

int happiness_b_u(int n,int happy[][3])
{
	int dp[n][3];
	//Base Case
	dp[0][0] = happy[0][0];
	dp[0][1] = happy[0][1];
	dp[0][2] = happy[0][2];

	for(int i=1;i<n;i++)
	{
		dp[i][0] = happy[i][0] + max(dp[i-1][1],dp[i-1][2]);
		dp[i][1] = happy[i][1] + max(dp[i-1][0],dp[i-1][2]);
		dp[i][2] = happy[i][2] + max(dp[i-1][0],dp[i-1][1]);
	}
	int ans = max(dp[n-1][0],dp[n-1][1]);
	int final = max(ans,dp[n-1][2]);
	return final;
}

int main()
{
	int n;
	cin>>n;
	int arr[n][3];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}

	int ans = happiness_b_u(n,arr);
	cout<<ans;
}
