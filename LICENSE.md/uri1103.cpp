#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hour, mint, h1, m1, h2, m2, tot=0;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        if(h1==0 || h2==0)
        {
            h1=23;
            h2=24;
        }
        if(m2>m1)
        {
            mint=m2-m1;
            if(h2>h1)
                hour=h2-h1;
            else
                hour=(h2+24)-h1;
            if(hour>0)
                cout<<(hour*60)+mint<<endl;
            else
                cout<<mint<<endl;
        }
        else if(m2<m1)
        {
            mint=(m2+60)-m1;
            h1==h1+1;
            if(h2>h1)
                hour=h2-h1;
            else
                hour=(h2+24)-h1;
            if(hour>0)
                cout<<(hour*60)+mint<<endl;
            else
                cout<<mint<<endl;
        }
        else
        {
            mint=m2-m1;
            if(h2>h1)
                hour=h2-h1;
            else
                hour=(h2+24)-h1;
            if(hour>0)
                cout<<(hour*60)+mint<<endl;
            else
                cout<<mint<<endl;
        }
    }
}
