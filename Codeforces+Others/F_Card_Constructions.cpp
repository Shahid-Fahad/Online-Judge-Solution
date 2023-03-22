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
        ll ans, c = 0, l, r;
        while (n >= 2)
        {
            l = 1, r = 1000000000;
            c++;
            while (r - l > 1)
            {
                ll m = (l + r) / 2;
                if (m == 1)
                    ans = 2;
                else
                {
                    ans = (m * 2) + (((m - 1) * m) / 2) * 3;
                }
                if (n >= ans)
                    l = m;
                else
                {
                    r = m;
                }
            }
            if (l == 1)
                ans = 2;
            else
            {
                ans = (l * 2) + (((l - 1) * l) / 2) * 3;
            }
            n = n - ans;
        }

        cout << c << endl;
    }
}
