#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, sum=0, f1, f2;
    cin>>n;
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            cout<<"0";
            f1=0;
        }
        else if(i==1)
        {
            cout<<"1";
            f2=1;
        }
        else
        {
        sum=f1+f2;
        f1=f2;
        f2=sum;
        cout<<sum;
        }

        if(i<n-1)
            cout<<" ";
        if(i==n-1)
            cout<<endl;
    }
    return 0;
}
