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
    vector<ll>v,v2,v3,v4;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            v2.push_back(v[i]*v[j]);
        }
    }
    for(ll i=0;i<v.size();i++)
    {
        for(ll j=0;j<v.size();j++)
        {
            for(ll k=0;k<v.size();k++)
            {
                if(v[k]!=0)
                v3.push_back(v[k]*(v[i]+v[j]));
            }
        }
    }
    sort(v3.begin(),v3.end());
    for(ll i=0;i<v2.size();i++)
    {
        for(ll j=0;j<v.size();j++)
        {
            v4.push_back(v2[i]+v[j]);
        }
    }
    sort(v4.begin(),v4.end());
    ll cnt=0;
    for(ll i=0;i<v4.size();i++)
    {
        auto it = equal_range(v3.begin(),v3.end(),v4[i]);
        if(it.second-it.first)
        {
            cnt = cnt + (it.second-it.first);
        }
    }
    cout << cnt << endl;

}
