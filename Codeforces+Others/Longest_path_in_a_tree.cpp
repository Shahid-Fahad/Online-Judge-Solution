///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll vis[10005];
vector<ll> v[10005];
ll dis[10005];
void dfs(ll n)
{
    vis[n] = 1;

    for (ll i = 0; i < v[n].size(); i++)
    {
        ll child = v[n][i];
        if (vis[child] == 0)
        {
            dis[child] = dis[n] + 1;
            dfs(child);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    for (ll i = 1; i <= n - 1; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    ll x = INT_MIN, ri;
    for (ll i = 1; i <= n; i++)
    {
        if (dis[i] > x)
        {
            x = dis[i];
            ri = i;
        }
    }
    memset(vis, 0, sizeof(vis));
    memset(dis, 0, sizeof(dis));
    dfs(ri);
    x = INT_MIN;
    for (ll i = 1; i <= n; i++)
    {
        x = max(x, dis[i]);
    }
    cout << x << endl;
}
