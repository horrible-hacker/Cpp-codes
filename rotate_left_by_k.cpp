#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  int k;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cin>>k;
  int j[k];
  for(int i=0;i<k;i++)
  {
    j[i]=a[i];
  }
  for(int i=0;i<n;i++)
  {
    if(i<n-k)
    {
    a[i]=a[i+k];
    }
    else
    {
      a[i]=j[i-(n-k)];
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
