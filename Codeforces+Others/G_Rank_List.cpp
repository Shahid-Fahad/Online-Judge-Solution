///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n >> k;
    map<pair<ll,ll>,ll>mp;
    vector<pair<pair<ll,ll>,ll>>v;
    while(n--)
    {
        ll x,y;
        cin >> x >> y;
        auto p = make_pair(x,y);
        mp[p]++;
    }
    for(auto x:mp)
    {
        v.push_back(make_pair(x.first,x.second));
    }
    ll i,j;
    for(i=0;i<v.size();i++)
    {
        for(j=i+1;j<v.size();j++)
        {
            if(v[i].first.first<v[j].first.first)
            {
                swap(v[i],v[j]);
            }
            else if((v[i].first.first==v[j].first.first)&&v[i].first.second>v[j].first.second)
            {
                swap(v[i],v[j]);
            }
        }
    }
    ll arr[55];
    ll ps=1;
    for(i=0;i<v.size();i++)
    {
        for(j=0;j<v[i].second;j++)
        {
            arr[ps] = v[i].second;
            ps++;
        }
    }
    cout << arr[k] << endl;
    

}
