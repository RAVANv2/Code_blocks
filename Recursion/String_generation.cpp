#include<bits/stdc++.h>
using namespace std;

void generate_string(char *in, char *out, int i, int j)
{
  // Base Case
  if(in[i]=='\0')
  {
    out[j]='\0';
    cout<<out<<endl;
    return;
  }

  // Recursive Case
  // Take one char at a time
  int digit = in[i]-'0';
  char ch = digit+'A'-1;
  out[j] = ch;
  generate_string(in,out,i+1,j+1);

  // Take 2 char at a time
  if(in[i+1]!='\0')
  {
    int second_digit = in[i+1] -'0';
    int num = digit*10+second_digit;
    int new_ch = num+'A'-1;
    if(num<=26)
    {
      out[j]=new_ch;
      generate_string(in,out,i+2,j+1);
    }
  }
}


int main()
{
  char in[1000];
  cin>>in;

  char out[1000];
  generate_string(in,out,0,0);
}
