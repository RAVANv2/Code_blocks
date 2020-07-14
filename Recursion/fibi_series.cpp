#include<bits/stdc++.h>
using namespace std;

int fibi(int n)
{
  // Base Case
  if (n==0 || n==1)
    return n;

  // Recursive Case
  int f1 = fibi(n-1);
  int f2 = fibi(n-2);
  return f1+f2;
}


int main()
{
  int n;
  cin>>n;

  cout<<fibi(n)<<endl;
}
