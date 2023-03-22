///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, t;
        cin >> n >> t;
        if (n % 2 == 0)
        {
            if (t % n == 0)
                cout << n << endl;
            else
                cout << t % n << endl;
        }
        else
        {
            ll m = n / 2 + 1;
            if (t < m)
                cout << t << endl;
            else
            {
                ll a;
                ll d = m - 1;
                a = (t - m) / d;
                t = t + a + 1;
                if (t % n == 0)
                    cout << n << endl;
                else
                    cout << t % n << endl;
            }
        }
    }
}
