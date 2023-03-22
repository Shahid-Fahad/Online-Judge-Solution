#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ll n, tar;
    cin >> n >> tar;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    ll sz = v.size();
    ll subsize = 1<<sz;///pow(2,sz);
    ll ans = 0;
    for (ll i = 0; i < subsize; i++)
    {
        bitset<3> bs = i;
        ll product = 1, cnt = 0, Div = 0;
        for (ll j = 0; j < sz; j++)
        {
            ll f = i & (1 << j);
            if (f)
            {
                cnt++;
                product *= v[j];
            }
        }
        if(cnt==0)continue;
        Div = tar / product;
        if (cnt % 2 == 1)
        {
            ans += Div;
        }
        else
        {
            ans -= Div;
        }
        cout << bs << " " << product << " " << Div << " " << ans << endl;
    }

    cout << "main answer " << ans << endl;
}