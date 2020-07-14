#include<bits/stdc++.h>
using namespace std;

int count_occ(int *a, int i, int n, int key, int *out, int j)
{
  // Base Case
  if(i==n)
    return j;

  // Recursive Case
  if(a[i]==key)
  {
    out[j] = i;
    return count_occ(a,i+1,n,key,out,j+1);
  }

  return count_occ(a,i+1,n,key,out,j);
}




void all_occ(int a[],int i,int n, int key)
{
  // Base Case
  if(i==n)
    return;

  // Recursive Case
  if(a[i]==key)
    cout<<a[i]<<" ";

  all_occ(a,i+1,n,key);

}

int main()
{
  int arr[] = {1,2,3,4,5,3,3,2,3,3,22,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  int key = 3;

  all_occ(arr,0,n,key);

  int output[100];
  int cnt = count_occ(arr,0,n,key,output,0);

  cout<<endl<<"Index of occ";
  cout<<endl;
  for(int k=0;k<cnt;k++)
    cout<<output[k]<<" ";

  cout<<endl<<"Count of occ"<<endl;
  cout<<cnt;


}
