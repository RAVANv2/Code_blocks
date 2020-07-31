#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll N,M,X,Y;
	cin>>N>>M>>X>>Y;

	ll s = 0;
	ll e = N;

	ll ans = INT_MAX;

	while(s<=e)
	{
		ll mid = (s+e)>>1;

		if(mid*X <= (M + (N-mid)*Y))
		{
			ans = mid;
			s = mid+1;
		}
		else
			e = mid-1;
	}
	cout<<ans<<endl;
}
