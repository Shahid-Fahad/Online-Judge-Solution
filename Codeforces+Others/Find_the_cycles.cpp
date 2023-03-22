///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<ll>v[200005];
ll vis[200005];
bool dfs(ll n,ll p)
{
    vis[n]=1;
    for(ll i=0;i<v[n].size();i++)
    {
        ll child = v[n][i];
        if(vis[child]==0)
        {
            if(dfs(child,n)==true)
            return true;
        }
        else
        {
            if(child!=p)
            return true;
        }
        
    }
    return false;
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
        cin >>x  >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    ll c=0;
    for(ll i=1;i<=n;i++)
    {
        bool f=false;
        if(vis[i]==0)
        {
           f = dfs(i,-1);
        }
        if(f)
        c++;
    }
    cout << c << endl;

}
