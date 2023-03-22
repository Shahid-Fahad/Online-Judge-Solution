///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    ll tc=0;
    while (getline(cin,s))
    {
        if(tc>0)
        cout << endl;
        tc++;
        vector<pair<ll, ll>> v;
        map<ll, ll> mp;
        for (ll i = 0; i < s.size(); i++)
        {
            ll k = s[i];
            
            mp[k]++;
        }
        for (auto x : mp)
        {
            v.push_back(make_pair(x.second, x.first));
        }
        sort(v.begin(), v.end());
        ll i,j;
        for (i = 0; i < v.size(); i++)
        {
            for (j = i+1; j < v.size(); j++)
            {
                if ((v[i].first == v[j].first)&&(v[i].second<v[j].second))
                { 
                    swap(v[i], v[j]);
                 
                }
            }
        }
        for (ll i = 0; i < v.size(); i++)
        {
            cout << v[i].second << " " << v[i].first << endl;
        }
    }
}
