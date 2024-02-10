//by default n is set as 100 which means by runnign this code you will get armstring numbers between 1 to 100
#include<iostream>
using namespace std;
int digits(int a)
{
    int count=0;
    for(int i=10;a>0;)
    {
        a=a/i;
        count++;
    }

    return count;
}
int pro(int a,int d)
{
  int sum=1;
    for(int i=1;i<=d;i++)
    {
      sum=sum*a;
    }
    return sum;
}
int main()
{
  int n;
  for(int z=2;z<1000;z++)
  {
    n=z;
  int d=digits(n);
  int sum=0;
  for(int i=0,j=10;i<d;i++,j=j*10)
  {
      sum=sum+pro(((n%j)-(n%(j/10)))/(j/10),d);
  }
  if(sum==n)
  {
    cout<<n<<" "<<"Yes\n";
  }
  else
  {
      cout<<n<<" "<<"NO\n";
  }
  }
  return 0;
}
