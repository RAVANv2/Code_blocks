#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[n];

	vector<int> v1,v2;

	for(int i=0;i<n/2;i++)
		v1.push_back(arr[i])

	for(int i=n/2;i<n;i++)
		v2.push_back(arr[i])


	for(int i=0;i<v1.size();i++)
	{
		if(v1[i]!=v2[i])
			cout<<"NO"<<endl;
		else
			cout<<"Yes"<<endl;
	}


}