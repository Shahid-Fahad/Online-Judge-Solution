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
        set<ll> s;
        vector<ll> v1, v5;
        deque<ll> v3;
        deque<deque<ll>> v2;
        ll mx = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            s.insert(x);
            v1.push_back(x);
        }
        auto u = --(s.end());
        mx = *u;
        ll f = 0, j = 0;
        for (ll i = v1.size() - 1; i >= 0; i--)
        {
            //cout << mx << " max " << i  << endl;
            ll f = 0;
            if (v1[i] < mx)
            {
                v3.push_front(v1[i]);
                s.erase(v1[i]);
                
            }
            else if (v1[i] == mx)
            {
                 v3.push_front(v1[i]);
                v2.push_back(v3);
                v3.clear();
                s.erase(v1[i]);
                j++;
                
                if(s.size()>0)
                {
                   //cout << s.size() << endl;
                   u = --(s.end());
                }
                mx = *u;
            }
           if (i == 0 && v1[i] != mx)
            {
                v2.push_back(v3);
                v3.clear();
                j++;
                mx--;
            }
        }
        // cout << v2.size() << endl;
        //reverse(v2.begin(),v2.end());
        ll c = 0;
        for (ll i = 0; i < v2.size(); i++)
        {

            for (ll j = 0; j < v2[i].size(); j++)
            {
                c++;
                cout << v2[i][j] << " ";
            }
        }

        cout << endl;
    }
}
