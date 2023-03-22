///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll p;
        vector<pair<ll, ll>> v;
        scanf("%lld", &p);
        while (p--)
        {
            ll x, y;
            scanf("%lld%lld", &x, &y);
            y = y * -1;
            v.push_back(make_pair(x, y));
        }
        sort(v.begin(), v.end());
        for (ll i = 0; i < v.size(); i++)
        {
            printf("%lld %lld\n", v[i].first, -1 * (v[i].second));
        }
    }
}
