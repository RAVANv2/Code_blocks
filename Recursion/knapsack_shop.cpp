#include<bits/stdc++.h>
using namespace std;

int profit(int n, int c, int *pr, int *wei)
{
  // Base Case
  if(n==0 or c==0)
    return 0;

  // Recursive Case
  // including last element
  int inc=INT_MIN,exc=INT_MIN;

  if(wei[n-1]<=c)
    inc = pr[n-1] + profit(n-1,c-wei[n-1],pr,wei);

  // exculding last element
  exc = profit(n-1,c,pr,wei);

  return max(inc,exc);
}


int main()
{
  int price[] = {40,20,30,100};
  int weight[] = {1,2,3,5};

  int n = 4;
  int c = 7;

  cout<<profit(n,c,price,weight);
}
