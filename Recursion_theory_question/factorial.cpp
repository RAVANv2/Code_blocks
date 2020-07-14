#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
  // Base Case
  if(n==0)
    return 1;

  // Recursive Case
  int small_ans = fact(n-1);
  return n*small_ans;
}

int main()
{
  int n;
  cin>>n;
  cout<<fact(n)<<endl;
}
