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
     map<pair<ll,ll>, string>mp;
    while(n--)
    {
        ll x,y;
        cin >> x>> y;
        auto p = make_pair(x,y);
        string s;
        cin >> s;
        mp[p]=s;
    }
    ll t;
    cin >> t;
    while(t--)
    {
        ll x,y;
        cin >> x>> y;
        auto p = make_pair(x,y);
        cout << mp[p] << endl;
    }

}
