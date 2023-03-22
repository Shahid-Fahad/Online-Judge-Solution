///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a,b,i,p1=0,p2=0,d=0;
    cin >> a >> b;
    for(i=1;i<=6;i++)
    {
        if(abs(a-i)<abs(b-i))
            p1++;
        else if(abs(a-i)>abs(b-i))
            p2++;
        else
            d++;
    }
    cout << p1 << " " << d << " " <<p2 << endl;

}
