#include<iostream>
using namespace std;
void swap(int *a , int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void selection_sort(int a[],int l)
{
      for(int i=0;i<l-1;i++)
      {
        for(int j=i+1;j<l;j++)
        {
            if(a[i]>a[j])
            {
              swap(a[i],a[j]);
            }
        }
      }
      for(int i=0;i<l;i++)
      {
        cout<<a[i]<<" ";
      }
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  selection_sort(a,n);
  return 0;
}
