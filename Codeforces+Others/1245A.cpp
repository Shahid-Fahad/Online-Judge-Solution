///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    ll a,b,d,t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(gcd(a,b)!=1)
            cout << "Infinite" << endl;
        else
            cout << "Finite" << endl;
    }
}
