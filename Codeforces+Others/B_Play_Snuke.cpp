///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<pair<ll,ll>>v;
    while(n--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        c = c-a;
        v.push_back({b,c});
    }
    sort(v.begin(),v.end());
    ll f=0;
    for(ll i=0;i<v.size();i++)
    {
        if(v[i].second>0)
        {
            cout << v[i].first << endl;
            f=1;
            break;
        }
    }
    if(f==0)
    cout << -1 << endl;

}
