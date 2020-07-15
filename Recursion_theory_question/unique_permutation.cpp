#include<bits/stdc++.h>
using namespace std;

void permutation(char *in, int i, set<string> &s)
{
  if(in[i]=='\0')
  {
    s.insert(in);
    return;
  }

  for(int k=i;in[k]!='\0';k++)
  {
    swap(in[k],in[i]);
    permutation(in,i+1,s);
    swap(in[k],in[i]);
  }
}

int main()
{
  char in[1000];
  cin>>in;

  set<string> s;
  permutation(in,0,s);

  for(auto i:s)
    cout<<i<<" ";
}
