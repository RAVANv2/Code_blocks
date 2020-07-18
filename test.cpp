// C++ program for solution of
// friends pairing problem
#include <bits/stdc++.h>
using namespace std;

int fun(int cnt)
{
  return ++cnt;
}

int main()
{
  int ans = fun(0);
  cout<<ans;
}
