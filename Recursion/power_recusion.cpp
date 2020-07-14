#include<bits/stdc++.h>
using namespace std;

int power(int a, int n)
{
  // Base Case
  if(n==0)
    return 1;

  // Recursion Case
  int small_ans = power(a,n-1);
  return a*small_ans;
}

int main()
{
  int a,n;
  cout<<"Enter number and power"<<endl;
  cin>>a>>n;

  cout<<power(a,n);

}
