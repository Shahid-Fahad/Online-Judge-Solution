///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll arr[400005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, k, t;
    cin >> n >> m >> k >> t;
    vector<ll> v;
    while (k--)
    {
        ll x, y;
        cin >> x >> y;
        ll ind = (m * x) - (m - y);
        v.push_back(ind);
    }
    sort(v.begin(), v.end());
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll ind = (m * x) - (m - y);
        ll c = 0, f = 0;
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i] == ind)
            {
                cout << "Waste" << endl;
                f = 1;
                break;
            }
            else if(v[i]>ind)
            break;
            c++;
        }
        if (f == 0)
        {
            ll ans = (ind-c) % 3;
            if (ans % 3 == 1)
                cout << "Carrots" << endl;
            else if (ans % 3 == 2)
                cout << "Kiwis" << endl;
            else
            {
                cout << "Grapes" << endl;
            }
        }
    }
}
