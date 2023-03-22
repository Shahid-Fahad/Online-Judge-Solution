///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    //ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
       ll ans = upper_bound(v.begin(),v.end(),x)-v.begin();
        cout << ans << endl;
    }
}
