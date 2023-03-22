///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll Pow(ll x, ll m)
{
    ll s = 1;
    for (ll i = 1; i <= x; i++)
    {
        s = s * m;
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        if (n == 0 && m == 0)
        {
            cout << 0 << endl;
        }
        else if (n == 0)
        {
            cout << Pow(m, 10) << endl;
        }
        else
        {
            cout << Pow(n, 26) * Pow(m, 10) << endl;
        }
    }
}
