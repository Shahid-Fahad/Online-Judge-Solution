///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<ll>s;
    map<ll,ll>mp;
    vector<ll>v;
    ll ps=0;
    ll n;
    while(cin >> n)
    {
        s.insert(n);
        if(s.size()!=ps)
        {
            v.push_back(n);
            ps=s.size();
        }
        mp[n]++;
    }
    for(ll i=0;i<v.size();i++)
    {
        cout << v[i]  << " "<< mp[v[i]] << endl;
    }

}
