#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,20,40,40,40,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 50;
    bool present = binary_search(arr,arr+n,key);
    if(present)
        cout<<"Present"<<endl;
    else
        cout<<"Not present"<<endl;


    // Their are two other function in STL 1. upper_bound(return address>key) 2. lower_bound(return address<=key)

    // Calculating lower bound
    auto lb = lower_bound(arr,arr+n,key); // Return address<=key
    cout<<"Lower bound of "<<key<<"->"<<lb-arr<<endl;

    // Calculating upper bound
    auto up = upper_bound(arr,arr+n,key); // Return address>key
    cout<<"Upper bound of "<<key<<"->"<<up-arr<<endl;

    // Calculating Frequency of key
    cout<<"Frequency of "<<key<<"->"<<up-lb<<endl;


}
