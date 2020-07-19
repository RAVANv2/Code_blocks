#include<bits/stdc++.h>
using namespace std;

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
string name[] = {"prateek", "sneha", "deepak", "arnav", "shikha", "palak","utkarsh", "divyam", "vidhi", "sparsh", "akku"};

void generate_name(char *in,char *out, int i, int j)
{
    // Base Case
    if(in[i]=='\0')
    {
        out[j]='\0';
        for(auto i:name)
        {
            int ans = i.find(out);
            if(ans>=0)
                cout<<i<<endl;
        }
        return;
    }

    // Recursive Case
    int digit = in[i]-'0';
    for(int k=0;table[digit][k]!='\0';k++)
    {
        out[j] = table[digit][k];
        generate_name(in,out,i+1,j+1);
    }
}

int main()
{
    char in[100];
    cin>>in;

    char out[100];
    generate_name(in,out,0,0);
}
