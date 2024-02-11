#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
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
  for(int i=0,j=0;i<n;i++)
  {
    if(a[i]!=0 && a[j]==0)
    {
      swap(a[i],a[j]);
      j++;
    }
    else if(a[i]==0 && a[j]!=0)
    {
        j=i;
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
