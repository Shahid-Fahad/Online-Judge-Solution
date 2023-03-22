///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin >> n >> m;
    vector<pair<ll,ll>>v;
    ll t=m;
    while(t--)
    {
        ll x,y;
        cin >> x >> y;
        v.push_back(make_pair(y,x));
    }
    sort(v.begin(),v.end());
    ll c=0;
    for(ll i=v.size()-1;i>=0;i--)
    {
        ll k = min(n,v[i].second);
        n = n-k;
        c = c + (k*v[i].first);
    }
    cout << c << endl;

}
