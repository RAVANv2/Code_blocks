#include<bits/stdc++.h>
using namespace std;

int strToint(char *a,int n)
{
    // Base Case
    if(n==0)
        return 0;

    // Recursive Case
    int digit = a[n-1]-'0';
    int small_ans = strToint(a,n-1);

    return small_ans*10 + digit;
}

int main()
{
    char a[] = "1234";
    int len = strlen(a);

    cout<<5+strToint(a,len);
}
