#include<bits/stdc++.h>
using namespace std;

int multiply(int a,int b)
{
  // Base Case
  if(b==1)
    return a;

  //Recursive Case
  int small_ans = multiply(a,b-1);
  return a+small_ans;
}



int main()
{
  int a,b;
  cout<<"Enter in this format 2 * 3"<<endl;
  cin>>a>>b;

  cout<<multiply(a,b);
}
