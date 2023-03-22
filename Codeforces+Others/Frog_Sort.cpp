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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v,v2;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> arr[i];
            v.push_back(make_pair(arr[i], i + 1));
        }
        sort(v.begin(), v.end());
        ll hit = 0, nb = 1;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v2.push_back(make_pair(arr[i], x));
        }
        ll i, j;
        for (i = 1; i < v.size(); i++)
        {

                if (v[i-1].second >= v[i].second)
                {
                   ll jm;
                   for(j=0;j<v2.size();j++)
                   {

                       if(v2[j].first==v[i].first)
                       {
                         jm =   v2[j].second;
                         break;
                       }
                   }
                    while (v[i-1].second >= v[i].second)
                    {

                        v[i].second += jm;
                        hit++;
                    }
                }

        }

        cout << hit << endl;
    }
}
