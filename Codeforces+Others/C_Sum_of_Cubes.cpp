///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i=1;
    set<ll> v;
    while (1)
    {
        ll ans = i * i * i;
        if (ans > 1000000000000)
         break;
        v.insert(ans);
        i++;
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll f=0;
        for(auto it:v)
        {
            ll k = n-it;
            if(v.find(k)!=v.end())
            {
                cout << "YES" << endl;
                f=1;
                break;
            }

        }
        if(f==0)
        cout << "NO" << endl;
    }
}
