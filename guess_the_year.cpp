#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main() {
    // Write C++ code here
    map<int,pair<string,string>> m;
    string hint[10];
    string ans[10];
    hint[0]="India's Independence";
    hint[1]="Sinking of RMS Titanic";
    hint[2]="Discovery of America";
    hint[3]="Rise of Hitler";
    hint[4]="Great Fire of London ";
    hint[5]="Discovery of WWW";
    hint[6]="Mahabharata War was fought";
    hint[7]="Crusification of Jesus";
    hint[8]="Barack Obama became President";
    hint[9]="Worls shortest War (Anglo-Zanzibar War)";
    ans[0]="1947";
    ans[1]="1912";
    ans[2]="1492";
    ans[3]="1933";
    ans[4]="1666";
    ans[5]="1989";
    ans[6]="0900";
    ans[7]="0033";
    ans[8]="2009";
    ans[9]="1896";
    for(int i=0;i<9;i++)
    {
         m[i]={ans[i],hint[i]};
    }
    srand(time(0));
    int ran = rand()%10;
    int trial = 5;
    cout<<"Hint: "<<m[ran].second<<endl;
    string an = m[ran].first;
    while(trial)
    {
        string guess;
        cin>>guess;
        if(guess.length()!=4)
        {
            cout<<"Invalid Answer"<<endl;
            continue;
        }
        int cor = 0;
        int pla = 0;
        for(int i=0;i<4;i++)
        {
            if(guess[i]==an[i])
            {
                pla++;
            }
        }
        if(pla==4)
        {
            cout<<"Congratulations!!!";
            break;
        }
        bool flag[4]={false};
        for(int i=0;i<4;i++)
        {
            for(int j = 0;j<4;j++)
            {
                if(guess[i]==an[j] && flag[j]==false)
                {
                    flag[j]=true;
                    cor++;
                }
            }
        }
        cout<<"Correct Numbers :"<<cor<<endl;
        cout<<"Correctly Placed :"<<pla<<endl;
        trial--;
        if(trial==0)
        {
            cout<<"Sorry You lost!!, Answer is : "<<an<<endl;
        }
    }
    return 0;
}
