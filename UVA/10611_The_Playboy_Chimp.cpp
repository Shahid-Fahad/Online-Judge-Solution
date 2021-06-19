///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, i;
    cin >> n;
    vector<ll> v;
    for (i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        ll l = -1, r = n;
        while (r - l > 1)
        {
            ll m = (l + r) / 2;
            if (v[m] >= x)
                r = m;
            else
            {
                l = m;
            }
        }
        if (r == 0)
            cout << "X ";
        else
        {
           cout << v[r-1] << " ";
        }
         l = -1, r = n;
        while (r - l > 1)
        {
            ll m = (l + r) / 2;
            if (v[m] <= x)
                l = m;
            else
            {
                r = m;
            }
        }
        if (l == n-1)
            cout << "X\n";
        else
        {
            cout << v[l+1] << endl;
        }
    }
}
