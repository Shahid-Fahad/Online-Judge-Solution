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
        ll n, x;
        cin >> n >> x;
        vector<ll> v, v2;
        ll sum = 0, f = 0;
        for (ll i = 0; i < n; i++)
        {
            ll k;
            cin >> k;
            sum = sum + k;
            v.push_back(k);
        }
        v2 = v;
        ll g = 0;
      
        while (1)
        {
           
            
            for (ll i = 0; i < v2.size(); i++)
            {
                if (v2[i] % x == 0)
                {
                    sum = sum + v[i];
                    v2[i] = v2[i] / x;
                }
                else
                {
                    f = 1;
                    break;
                }
 
            }
                if (f == 1)
                    break;
        }
        cout << sum << endl;
    }
}