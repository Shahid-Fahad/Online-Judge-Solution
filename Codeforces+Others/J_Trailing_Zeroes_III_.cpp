///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll zcount(ll x)
{
    ll k=1,s=0;
    while(1)
    {
        k = k*5;
        if(k>x)
        break;
        s = s + (x/k); 
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for(ll i=1;i<=t;i++)
    {
        ll x;
        cin >> x;
        ll l=-1,r=1e18+1;
        while(r-l>1)
        {
            ll m= (l+r)/2;
            ll ans = zcount(m);
            if(ans>=x)
            r=m;
            else
            l=m;
        }
        cout << "Case " << i <<": ";
        if(zcount(r)==x)
        {
            cout << r << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
        
    }

}
