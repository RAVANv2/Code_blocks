#include<bits/stdc++.h>
using namespace std;

int generateSequence(char *in, char *out, int i, int j,int cnt)
{
    // Base Case
    if(in[i]=='\0')
    {
      out[j]='\0';
      cout<<out<<endl;
      cnt++;
      return cnt;
    }

    // Recursive Case
    // Taking the current element
    out[j]=in[i];
    int left=generateSequence(in,out,i+1,j+1,cnt);

    // Skipping the current element
    int right=generateSequence(in,out,i+1,j,cnt);

    return left+right;
}



int main()
{
    char input[] = "abc";
    char output[1000];
    int cnt=0;
    cout<<generateSequence(input,output,0,0,cnt);

}
