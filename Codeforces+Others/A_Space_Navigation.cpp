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
        ll x, y;
        ll r = 0, l = 0, u = 0, d = 0, f = 0;
        cin >> x >> y;
        string s;
        cin >> s;
        map<char, ll> mp;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == 'R')
            {
                r++;
            }
            else if (s[i] == 'L')
                l++;
            else if (s[i] == 'U')
            {
                u++;
            }
            else if (s[i] == 'D')
                d++;
        }
        if (x > 0)
        {
            if (r >= x)
                f++;
        }
        else if (x < 0)
        {
            if (l >= abs(x))
                f++;
        }
        if (y > 0)
        {
            if (u >= y)
                f++;
        }
        else if (y < 0)
        {
            if (d >= abs(y))
                f++;
        }
        if (x == 0)
            f++;
        if (y == 0)
            f++;

        if (f == 2)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}
