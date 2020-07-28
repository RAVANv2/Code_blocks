#include<bits/stdc++.h>
using namespace std;

bool canWePutCow(int stall[],int n,int c,int mid)
{
	int last_cow = stall[0];
	int cnt = 1;

	for(int i=1;i<n;i++)
	{
		if(stall[i]-last_cow>=mid)
		{
			last_cow = stall[i];
			cnt++;
			if(cnt==c)
				return true;
		}
	}

	return false;
}

int main(){

	int n,c;
	cin>>n>>c;

	int stall[n];
	for(int i=0;i<n;i++)
		cin>>stall[i];

	sort(stall,stall+n);

	int s = 0;
	int e = stall[n-1]-stall[0];
	int ans=-1;

	while(s<=e)
	{
		int mid = (s+e)>>1;

		bool cow_rakh_paye = canWePutCow(stall,n,c,mid);
		if(cow_rakh_paye)
		{
			ans=mid;
			s = mid+1;
		}
		else
			e = mid-1;
	}

	cout<<ans<<endl;
}
