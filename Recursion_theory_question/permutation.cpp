#include<bits/stdc++.h>
using namespace std;

void permutation(char c[], int i)
{
    // Base Case
    if(c[i]=='\0')
    {
        cout<<c<<" ,";
        return;
    }

    // Recursive Case
    // Swaping the char with other index
    for(int k=i;c[k]!='\0';k++)
    {
        swap(c[k],c[i]);
        permutation(c,i+1);

        // Backtracking
        swap(c[k],c[i]);
    }
}



int main()
{
    char c[1000];
    cin>>c;

    permutation(c,0);
}
