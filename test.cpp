#include<bits/stdc++.h>
using namespace std;

int main()
{
  char ch[] = "abc";
  char ch2[] = "bcd";
  set<string> s;
  s.insert(ch);
  s.insert(ch2);

  for(auto i:s)
    cout<<i<<endl;
}
