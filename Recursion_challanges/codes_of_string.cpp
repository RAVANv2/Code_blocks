#include<bits/stdc++.h>
using namespace std;

void generate_code(char *in,char *out,int i,int j)
{
    // Base case
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<", ";
        return;
    }

     // Take one character from input
    int digit = in[i]-'0';
    char ch = digit + 'a' -1;
    out[j] = ch;
    generate_code(in,out,i+1,j+1);

    // Taking two char at a time
    if(in[i+1]!='\0')
    {
        int second_digit = in[i+1]-'0';
        int num = digit*10+second_digit;
        char new_ch = num + 'a' - 1;
        if(num<=26)
        {
            out[j] = new_ch;
            generate_code(in,out,i+2,j+1);
        }

    }
    return;
}

int main()
{
    char in[200];
    cin>>in;
    char out[200];

    cout<<"[";
    generate_code(in,out,0,0);
    cout<<"\b\b]";
}
