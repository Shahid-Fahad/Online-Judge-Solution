///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v, v2,v3;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        for (ll i = 0; i < k - 1; i++)
        {
            v.push_back(v[i]);
        }
        v3=v;
        ll p=0;
        for (ll i = 1; i < v.size(); i++)
        {
            v[i] = v[i] + v[i - 1];
            if (i == k - 1)
                v2.push_back(v[i]);
            else if(i>k-1)
            {v2.push_back(v[i]-v[p]);
            p++;}
        }
        sort(v2.begin(), v2.end());
        cout << v2[v2.size() - 1] << endl;
    }
}
