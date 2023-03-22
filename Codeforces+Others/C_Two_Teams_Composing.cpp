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
        ll n;
        cin >> n;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        ll mn = 0;
        ll sz = mp.size();
        ll k;
        for (auto it : mp)
        {
            if (it.second >= 2)
            {
                if (sz - 1 >= it.second)
                    k = it.second;
                else
                    k = it.second - 1;
            }
            else
                k = 1;
            mn = max(mn, k);
        }
        if (mn == 0)
            mn = 1;
        cout << min(mn, sz) << endl;
    }
}
