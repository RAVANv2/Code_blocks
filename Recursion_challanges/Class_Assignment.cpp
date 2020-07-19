#include<bits/stdc++.h>
using namespace std;

int alice_ans(int n)
{
    // Base Case:
    if(n==1)
        return 2;
    if(n==0)
        return 1;

    // Recursive Case
    int last_a = alice_ans(n-1);
    int last_b = alice_ans(n-2);
    return last_a+last_b;
}

int main()
{
    int t;
    cin>>t;
    int count=0;

    while(t--)
    {   count++;
        int n;
        cin>>n;
        cout<<"#"<<count<<" "<<":"<<" "<<alice_ans(n)<<endl;
    }
}
