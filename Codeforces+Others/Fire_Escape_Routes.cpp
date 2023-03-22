///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<ll> v[100005];
ll vis[1000005];
ll nc = 0;
ll dfs(ll n)
{
    vis[n] = 1;
    nc++;
    for (ll i = 0; i < v[n].size(); i++)
    {
        ll child = v[n][i];
        if (vis[child] == 0)
        {
            dfs(child);
        }
    }
    return nc;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, e;
        cin >> n >> e;
        memset(vis,0,sizeof(vis));
        for(ll i=1;i<=n;i++)
        {
            v[i].clear();
        }
        for (ll i = 0; i < e; i++)
        {
            ll x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        vector<ll> v2;
        ll cc = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                ll k = dfs(i);
                v2.push_back(k);
                cc++;
                nc = 0;
               
            }
        }
        ll mod = 1e9+7;
        ll sum = 1;
        for (ll i = 0; i < v2.size(); i++)
        {
            sum = ((sum%mod) * (v2[i]%mod)%mod);
        }
        cout << cc << " " << sum%mod << endl;
    }
}
