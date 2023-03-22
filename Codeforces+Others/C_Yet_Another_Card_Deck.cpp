///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    cin >> n >> q;
    vector<pair<ll,ll>>v;
    map<ll,ll>mp;
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
        if(mp[x]>1)
        continue;
        v.push_back({x,i});
    }
    while(q--)
    {
       ll x;
       cin >> x;
       ll ind;
       for(ll i=0;i<v.size();i++)
       {
           if(v[i].first==x)
           {
               cout << v[i].second << " ";
               ind = i;
               break; 
           }
       }
       
       for(ll i=0;i<v.size();i++)
       {
           if(v[i].second<v[ind].second)
           {
               v[i].second++;
           }
       }
       v[ind].second=1;   


    }
    

}
