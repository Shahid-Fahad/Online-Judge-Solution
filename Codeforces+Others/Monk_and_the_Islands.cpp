///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<ll>v[10003];
ll vis[10003];
ll dis[10003];
void bfs(ll root)
{
    queue<ll>q;
    vis[root]=1;
    q.push(root);
    while(q.size()!=0)
    {
        ll curn = q.front();
        q.pop();
        for(ll i=0;i<v[curn].size();i++)
        {
            ll child = v[curn][i];
            if(vis[child]==0)
            {
                q.push(child);
                vis[child]=1;
                dis[child] = dis[curn]+1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n >> m;
        for(ll i=1;i<=n;i++)
        {
            v[i].clear();
            vis[i]=0;    
        }
        for(ll i=1;i<=m;i++)
        {
            ll x,y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        bfs(1);
        cout << dis[n] << endl;
    }

}
