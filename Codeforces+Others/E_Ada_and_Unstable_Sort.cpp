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
    map<ll,vector<ll>>mp;
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin >>x;
        mp[x].push_back(i);
    }
    for(auto &x:mp)
    {
        reverse(x.second.begin(),x.second.end());
    }
    for(auto x:mp)
    {
        for(ll i=0;i<x.second.size();i++)
        {
            cout << x.second[i] << " ";
        }
    }
    cout << endl;

}
