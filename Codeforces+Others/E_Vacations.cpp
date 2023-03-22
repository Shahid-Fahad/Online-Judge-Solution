///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<pair<ll,ll>>v;
ll dp[100005];
ll n;
ll wood(ll i,ll lim)
{
    if(i==n)
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    
    ll x= v[i].first;
    ll y = v[i].second;
    
    ll ul=v[i+1].first;
    
    
    ll a=0,b=0,c=0;
    
    if(x-y>lim)
    a = wood(i+1,x)+1;
    if(x+y<ul)
    b = wood(i+1,x+y)+1;
    c = wood(i+1,x);
    
    return dp[i] = max({a,b,c});
    
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    memset(dp,-1,sizeof(dp));
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    v.push_back({1e18,1e18});
    cout << wood(0,-1e18) << endl;


}
