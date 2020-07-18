#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll generate_string(ll n)
{
	// Base Case
	if(n<0)
		return 0;

	if(n==0)
		return 1;

	if(n==1)
		return 2;

	// Recursive Case
	ll last_zero = generate_string(n-1);
	ll last_one = generate_string(n-2);

	return last_one+last_zero;
}

int main(){
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<generate_string(n)<<endl;
	}
}
