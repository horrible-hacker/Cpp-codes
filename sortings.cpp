#include<iostream>
using namespace std;
void swap(int *a , int *b) //swap 2 numbers
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void duplicate(int a[],int b[],int n) //put the values on fulled array a into array b
{
  for(int i=0;i<n;i++)
  {
    b[i]=a[i];
  }
}

void show (int a[],int n) //display the array
{
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
void selection_sort(int a[],int l) //using selction sort which take O(n^2) time 
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
      show(a,l);
}
void insertion_sort(int a[],int l) //using insertion sort 
{
  for(int i=0;i<l-1;i++)
  {
    for(int j=0;j<l-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
          swap(a[j],a[j+1]);
      }
    }
  }
  show(a,l);
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
  int b[n],c[n];
  duplicate(a,b,n);
  duplicate(a,c,n);
  selection_sort(b,n);
  insertion_sort(c,n);
  show(a,n);
  return 0;
}
