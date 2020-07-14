#include<bits/stdc++.h>
using namespace std;

string s[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

void printspell(int n)
{
    // Base Case
    if(n==0)
        return;

    // Recursive Case
    printspell(n/10);
    cout<<s[n%10]<<" ";

}

int main()
{
    int number = 2102;
    printspell(number);
}
