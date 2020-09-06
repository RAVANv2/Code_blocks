#include<bits/stdc++.h>
#include<cmath>
using namespace std;

#define ll long long 

int lcs(char str1[],char str2[])
{
	int m = strlen(str1);
	int n = strlen(str2);

	// Base Case of DP
	int dp[100][100];
	for(int i=0;i<=m;++i) dp[i][0]=0;
	for(int j=0;j<=n;++j) dp[0][j]=0;

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int q=0;
			if(str1[i-1]==str2[j-1])
				q = 1 + dp[i-1][j-1];
			else
				q = max(dp[i][j-1],dp[i-1][j]);
			dp[i][j] = q;
		}

	}
	return dp[i][j];
}



int main()
{
	char str1,str2;
	cin>>str1>>str2;

	int ans = lcs(str1,str2);
}
