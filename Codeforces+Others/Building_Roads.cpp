///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<ll>v[100005];
ll vis[100005];
void dfs(ll n)
{
    vis[n]=1;
    for(ll i=0;i<v[n].size();i++)
    {
        ll child = v[n][i];
        if(vis[child]==0)
        {
            dfs(child);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,e;
    cin >> n >> e;
    for(ll i=1;i<=e;i++)
    {
        ll x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vector<ll>r;
    ll c=0;
    for(ll i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            r.push_back(i);
            dfs(i);
            c++;
        }
    }
    cout << c-1 << endl;
    for(ll i=0,j=1;j<=c-1;i++,j++)
    {
        cout << r[i] << " " << r[i+1] << endl;
    }
    cout << endl;
}
