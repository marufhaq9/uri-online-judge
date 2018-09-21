#include <bits/stdc++.h>
using namespace std;
int main()
{
    int day, hour, minit, secnd, d1, d2, m1, m2, s1, s2, h1, h2;
    char a[4], b[2], c[2], d[2], e[2], f[2];
    scanf("%s %d", a, &d1);
    scanf("%d %s %d %s %d", &h1, b, &m1, c, &s1);
    scanf("%s %d", d, &d2);
    scanf("%d %s %d %s %d", &h2, e, &m2, f, &s2);

if(s2<s1)
{
    secnd=(s2+60)-s1;
    m1=m1+1;
        if(m2<m1)
        {
            minit=(m2+60)-m1;
            h1=h1+1;
        }
        else
            minit=m2-m1;
        if(h2<h1)
        {
            hour=(h2+24)-h1;
            d1=d1+1;
        }
        else
            hour=h2-h1;
        cout<<d2-d1<<" dia(s)"<<endl;
        cout<<hour<<" hora(s)"<<endl;
        cout<<minit<<" minuto(s)"<<endl;
        cout<<secnd<<" segundo(s)"<<endl;

    }
    else if(s2>s1)
    {
        secnd=s2-s1;
    //m1=m1+1;
        if(m2<m1)
        {
            minit=(m2+60)-m1;
            h1=h1+1;
        }
        else
            minit=m2-m1;
        if(h2<h1)
        {
            hour=(h2+24)-h1;
            d1=d1+1;
        }
        else
            hour=h2-h1;
        cout<<d2-d1<<" dia(s)"<<endl;
        cout<<hour<<" hora(s)"<<endl;
        cout<<minit<<" minuto(s)"<<endl;
        cout<<secnd<<" segundo(s)"<<endl;
    }
    else
    {
        secnd=s2-s1;
    //m1=m1+1;
        if(m2<m1)
        {
            minit=(m2+60)-m1;
            h1=h1+1;
        }
        else
            minit=m2-m1;
        if(h2<h1)
        {
            hour=(h2+24)-h1;
            d1=d1+1;
        }
        else
            hour=h2-h1;
        cout<<d2-d1<<" dia(s)"<<endl;
        cout<<hour<<" hora(s)"<<endl;
        cout<<minit<<" minuto(s)"<<endl;
        cout<<secnd<<" segundo(s)"<<endl;
    }
    return 0;
}
