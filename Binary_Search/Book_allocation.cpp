#include<bits/stdc++.h>
using namespace std;

bool canStudentRead(int *books,int n,int student,int mid)
{
  int page=0;
  int cnt=1;

  for(int i=0;i<n;i++)
  {
    if(page + books[i] > mid)
    {
      page = books[i];
      cnt++;
      if(cnt>student)
        return false;
    }
    else
      page += books[i];
  }
  return true;
}

int main()
{
    int books[] = {10,20,30,40};
    int n = sizeof(books)/sizeof(books[0]);
    int student = 2;

    int s = books[n-1];
    int e=0;
    for(int i=0;i<n;i++)
        e +=books[i];

    int ans=INT_MAX;
    while(s<=e)
    {
        int mid = (e+s)>>1;

        bool acche_bacche = canStudentRead(books,n,student,mid);
        if(acche_bacche)
        {
          ans=min(ans,mid);
          e = mid-1;
        }
        else
          s = mid+1;
    }
    cout<<ans;
}
