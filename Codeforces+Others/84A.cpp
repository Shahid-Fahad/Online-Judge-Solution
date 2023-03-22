///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll x,k,a,b,c=0;
    cin >> x;
    a=b=x;
    k=(2*x)/3;
    while(k--)
    {
        b--;
        if(b>=0&&a>0)
        c++;
        a--;
        if(a>=0&&b>0)
        c++;
        b--;
        if(b>=0&&a>0)
        c++;
    }
    cout << c << endl;
}
