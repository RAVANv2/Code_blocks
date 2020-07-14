#include<bits/stdc++.h>
using namespace std;

int count_binaryString(int n)
{
    // Base case:
    if(n==0)
      return 1;

    if(n==1)
      return 2;

    // Recursive case:
    int zero = count_binaryString(n-1);
    int last_one = count_binaryString(n-2);

    return zero+last_one;
}

int main()
{
    int n;
    cin>>n;

    cout<<count_binaryString(n)<<endl;
}
