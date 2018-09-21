#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int i=0, n, t, anml[500];
    char a[500];
    int sum=0,sumC=0, sumR=0, sumS=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>anml[i];
        cin>>a[i];
        //i++;
        sum+=anml[i];
        if(a[i]=='C')
            sumC+=anml[i];
        else if(a[i]=='R')
            sumR+=anml[i];
        else if(a[i]=='S')
            sumS+=anml[i];
    }
    cout<<"Total: "<<sum<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<sumC<<endl;
    cout<<"Total de ratos: "<<sumR<<endl;
    cout<<"Total de sapos: "<<sumS<<endl;
    //percentage
    printf("Percentual de coelhos: %.2f ",(sumC*100.0)/sum);
    cout<<"%"<<endl;
    printf("Percentual de ratos: %.2f ",(sumR*100.0)/sum);
    cout<<"%"<<endl;
    printf("Percentual de sapos: %.2f ",(sumS*100.0)/sum);
    cout<<"%"<<endl;

    return 0;
}
