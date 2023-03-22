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
        ll n, d;
        cin >> n >> d;
        if (n >= d)
            cout << "YES" << endl;
        else
        {
            ll l = -1, r = n + 1;
            while (r - l > 1)
            {
                ll m = (l + r) / 2;
                ll ans = d / (m + 1);
                if (d % (m + 1) != 0)
                    ans++;
                ans = ans + m;
                cout <<m << " " << ans << endl;
                if (ans <= n)
                    l = m;
                else
                    r = m;
            }
            if (l <=0)
                cout << "NO" << endl;
            else
            {
                ll ans = d / (l + 1);
                if (d % (l + 1) != 0)
                    ans++;
                ans = ans + l;
                if (ans <= n)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}
