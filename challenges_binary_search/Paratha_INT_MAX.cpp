#include <bits/stdc++.h>
using namespace std;

bool canWeMakeParatha(int cooks[],int c,int paratha,int mid)
{
	int paratha_count = 0;

	for(int i=0;i<c;i++)
	{
		int time = 0;
		for(int p=1;p<=paratha;p++)
		{
			if((cooks[i]*p + time) > mid)
				break;
			else
			{
				time += cooks[i]*p;
				paratha_count++;
				if(paratha_count>=paratha)
					return true;
			}
		}
	}
	return false;

}


int main()
{
	int paratha;
	cin>>paratha;
	int c;
	cin>>c;
	int cooks[c];
	for(int i=0;i<c;i++)
		cin>>cooks[i];

	int s = 0;
	int e = INT_MAX;
	int ans=-1;

	while(s<=e)
	{
		int mid = (s+e)>>1;

		bool paratha_ready = canWeMakeParatha(cooks,c,paratha,mid);

		if(paratha_ready)
		{
			ans = mid;
			e = mid-1;
		}
		else
			s = mid+1;
	}

	cout<<ans<<endl;

}
