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
        ll n, k;
        cin >> n;
        vector<pair<ll, ll>> p;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            p.push_back({x, y});
        }
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll s=0;
        for (ll i = 0; i < n; i++)
        {
            ll x = (p[i].second - p[i].first);
            ll y = x / 2;
            if (x % 2 == 1)
             y++;
            y++;
            if(y>=p[i].second)
            p[i].second=y;
             ll d = p[i].second-p[i].first; 
            if(i==0)
            p[i].first+=v[i];
            else
            p[i].first = p[i-1].second+abs(p[i-1].second-p[i].first)+v[i];
            
            p[i].second = p[i].first+d;

            //cout << "TEST " << p[i].first << " " << p[i].second << endl;

          
        }
        cout << p[n - 1].first << endl;
    }
}
