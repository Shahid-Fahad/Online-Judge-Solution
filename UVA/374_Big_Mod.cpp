///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll bigmod(ll b,ll p, ll m)
{
    if(p==0)
    return 1%m;
    else if(p%2==0)
    {
        ll y = bigmod(b,p/2,m);
        return ((y%m)*(y%m))%m;
    }
    else
    {
        ll y = bigmod(b,p-1,m);
        return ((b%m)*(y%m))%m;
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll b,p,m;
    while(cin >> b >> p >> m)
    {
        cout << bigmod(b,p,m) << endl;
    }

}
