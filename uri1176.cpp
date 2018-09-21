#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, j, sum=0, f1, f2, a[100];
    int n;
    //cin>>n;
    for(i=0; i<61; i++)
    {
        if(i==0)
        {
            f1=0;
            a[0]=0;
        }
        else if(i==1)
        {
            f2=1;
            a[1]=1;
        }
        else
        {
        sum=f1+f2;
        f1=f2;
        f2=sum;
        //cout<<sum;
        a[i]=sum;
        }

    }
    int t;
        cin>>t;
        while(t--)
        {
            cin>>n;
            //for(i=0; i<61; i++)
            //{
                //if(i==n)
                    cout<<"Fib("<<n<<") = "<<a[n]<<endl;
            //}

        }
    return 0;
}

