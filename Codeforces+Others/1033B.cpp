///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll prime(ll x)
{
    ll i;
    if(x==1||x==0)
        return 0;
    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return 1;
    }
    return 0;
}
int main()
{
    ll a,b,t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(prime(a+b)==0&&(a-b==1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
