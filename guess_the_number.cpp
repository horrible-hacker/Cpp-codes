#include <iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main() 
{
    srand(time(0));
    int a[3];
     a[0] = rand()%10;
     a[1] = rand()%10;
     a[2] = rand()%10;
     int trial = 5;
    cout<<"You have 5 trials to guess correct number upto 3 digit"<<endl;
    while(trial--)
    {
        int num;
        cin>>num;
        if((int)(log10(num)+1)>3)
        {
            cout<<"Invalid number\n";
            continue;
        }
        int d[3];
        for(int i=0;i<3;i++)
        {
            d[2-i]=num%10;
            num = num/10;
        }
        bool flag[3];
        for(int i=0;i<3;i++)
        {
            flag[i]=false;
        }
        int place = 0;
        int corr = 0;
        for(int i=0;i<3;i++)
        {
            if(a[i]==d[i])
            {
                place++;
            }
        }
        if(place==3)
        {
            cout<<"Congratulation, You won"<<endl;
            break;
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(d[i]==a[j] && flag[j] == false)
                {
                    flag[j]=true;
                    corr++;
                }
            }
        }
        cout<<"Correct Numbers: "<<corr<<endl;
        cout<<"Correctly Placed: "<<place<<endl;
    }
    cout<<"Number is :"<<a[0]<<a[1]<<a[2]<<endl;
    return 0;
}
