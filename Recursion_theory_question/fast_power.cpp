#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n)
int power(int a, int n)
{
  // Base Case
  if (n==0)
    return 1;

  // Recursive Case
  return a*power(a,n-1);
}


// Time Complexity (O(Log n))
int fast_power(int a,int n)
{
  // Base Case
  if (n==0)
    return 1;

  // Recursive Case
  int small_ans = fast_power(a,n/2);
  small_ans *=small_ans;

  if(n&1)
    return a*small_ans;
  return small_ans;
}

int main()
{
  int a,n;
  cin>>a>>n;

  cout<<power(a,n)<<endl;
  cout<<fast_power(a,n)<<endl;

}
