#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double pi=2*acos(0);
    cin >> t;
    while(t--)
    {
        double n,l,res;
        cin >> n >> l;
        res = pi*sqrt(pow(l/2.0,2)-pow(n/2.0,2))*(l/2);
        printf("%0.3lf\n",res);


    }
}
