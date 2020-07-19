#include<bits/stdc++.h>
using namespace std;

set<string> s;

void generate_permutation(char *in,int i)
{
    // Base Case
    if(in[i]=='\0')
    {
        s.insert(in);
        return;
    }

    // Recusive case
    for(int k=0;in[k]!='\0';k++)
    {
        // Swap case
        swap(in[i],in[k]);
        generate_permutation(in,i+1);

        // Backtracking
        swap(in[i],in[k]);
    }
}


int main()
{
    char in[100];
    cin>>in;

    generate_permutation(in,0);

    for(auto i:s)
      cout<<i<<endl;
}
