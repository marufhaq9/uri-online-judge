#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int validation();
int main()
{

    //again:
    validation();
    return 0;
}
int validation()
{
    int i, j=0;
    double a, b, c, d, avg=0;
    while(cin>>a)
    {
        if(a<0)
            cout<<"nota invalida"<<endl;
        else if(a>10)
            cout<<"nota invalida"<<endl;
        else
        {
            j++;
            avg+=a/2.0;
            if(j==2)
            {
                printf("media = %.2lf\n", avg);
                avg=0;
again:
                cin>>i;
                if(i==1)
                {
                    cout<<"novo calculo (1-sim 2-nao)"<<endl;
                    validation();
                }
                else if(i==2)
                {
                    cout<<"novo calculo (1-sim 2-nao)"<<endl;
                    exit(0);
                }
                else
                {
                    cout<<"novo calculo (1-sim 2-nao)"<<endl;
                    goto again;
                }

            }
        }
    }
}
