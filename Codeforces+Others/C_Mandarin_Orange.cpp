///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll i;
    vector<ll> v1, v2;
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v1.push_back(x);
        v2.push_back(x);
        mp[x] = i + 1;
    }
    sort(v2.begin(), v2.end());
    ll k = v2[0];
    for (i = 0; i < v1.size(); i++)
    {
        if (v1[i] == k)
        {
            ll x = ((n-(i+1)+1)*k);
            v2.push_back(x);
            break;
        }
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if(it==mp.begin())
        {
           continue;
        }
        else
        {
            auto it2 = it;
            it2--;
            ll k = it2->second+1;
            ll x = (n-k+1)*it->first;
            v2.push_back(x);

        }
        
    }
   
    sort(v2.begin(), v2.end());
    cout << v2[v2.size() - 1] << endl;
}
