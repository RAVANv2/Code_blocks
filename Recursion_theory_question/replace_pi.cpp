#include<bits/stdc++.h>
using namespace std;


void replacePi(char *a, int i)
{
    // Base Case
    if(a[i]=='\0' or a[i+1]=='\0')
        return;

    // If we found pi
    if(a[i]=='p' and a[i+1]=='i')
    {
        int j=i+2;
        while(a[j]!='\0')
            j++;

        while(j>=i+2)
        {
            a[j+2]=a[j];
            j--;
        }

        // putting 3.14 instead of pi
        a[i] = '3';
        a[i+1] = '.';
        a[i+2] = '1';
        a[i+3] = '4';
        replacePi(a,i+4);
    }
    // else go for next index
    else
    {
      replacePi(a,i+1);
    }

    return;
}


int main()
{
    char c[1000];
    cin>>c;

    replacePi(c,0);

    cout<<c;
}
