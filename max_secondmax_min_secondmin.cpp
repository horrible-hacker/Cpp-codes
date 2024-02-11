#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int max=INT32_MIN,s_max=INT32_MIN,min=INT32_MAX,s_min=INT32_MAX;
  for(int i=0;i<n;i++)
  {
    
    
        if(a[i]>max)
        {
          s_max=max;
          max=a[i];
        }
        else if(a[i]>s_max && a[i]!=max)
        {
          s_max=a[i];
        }        
        if(a[i]<min)
        {
          s_min=min;
          min=a[i];
        }
        else if(a[i]<s_min && a[i]!=min)
        {
          s_min=a[i];
        }
    
  }
  cout<<min<<" "<<s_min<<" "<<s_max<<" "<<max;
  return 0;
}
