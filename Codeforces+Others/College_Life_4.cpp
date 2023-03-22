///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, e, ck, a, b, c;
        cin >> n >> e >> ck >> a >> b >> c;
        ll tc,cost=1e18;
        if(max(e,ck)<n)
        {
            cout << -1 << endl;
            continue;
        }
        for(ll i=0;i<=n;i++)
        {
            if(e<i||ck<i)
            break;
            ll ro,rm;
            if(a<b)
            {
                ro = min((n-i),((e-i)/2));
                rm = n-i-ro;
            }
            else
            {
                rm = min((n-i),((ck-i)/3));
                ro = n-i-rm;
            }
            ll tote = i+(ro*2);
            ll totc = i+(rm*3);
            if(tote>e||totc>ck)
            continue;
            ll cst = (i*c) + (ro*a) + (rm*b);
            cost = min(cst,cost);
        }
        if(cost<1e18)
        cout << cost << endl;
        else
        cout << -1 << endl;
    }
}
