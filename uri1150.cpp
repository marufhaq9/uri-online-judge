#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n, t=0, i, j=0;
    cin>>x;
    again:
    while(cin>>n)
    {
        j=x;
        if(n<x)
            goto again;
        else
        {
            for(i=x; i<n-1; i++)
            {
                j+=i+1;
                if(j>n)
                    t++;
            }
            cout<<t<<endl;
        }
    }
}
