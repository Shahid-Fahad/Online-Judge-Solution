#include <bits/stdc++.h>
using namespace std;
double phi(double x){
    double val=(x*x*x)+3;
    val=10.0/val;
    val=sqrt(val);
    return val;
}
double f(double x){
    return bigMod(x,5)+3*bigMod(x,2)-10;
}
int main()
{
    double er=1e-3,x0=(1.5),x1=1e5;
    int cnt=1;
    while(1){
        cout<<"Iteration "<<cnt++<<"\t:\t";
        x1=phi(x0);
        cout<<x1<<endl;
        if(abs(x1-x0)>er)
        x0=x1;
        else{
            x0=x1;
            break;
        }
    }
    cout<<nl;
    cout<<"Final Root \t:\t";
    cout<<setprecision(3)<<fixed<<x0<<endl<<endl;
}
