///Bismillahir Rahmanir Rahim
//ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll int
#define case_(tc) cout << "Case " << tc << ": ";
const ll N = 10004;
ll dp[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1, tc = 0;
    dp[0] = dp[1] = dp[2] = 0;
    for (ll i = 3; i < N; i++)
    {
        ll a = 1, b = i - 1;
        vector<ll> v;
        while (b > a)
        {
            v.push_back({dp[a] ^ dp[b]});
            a++;
            b--;
        }
        ll mex = 0;
        if (v.size() > 0)
        {
            sort(v.begin(), v.end());
            for (auto it : v)
            {
                if (it == mex)
                    mex++;
            }
        }
        dp[i] = mex;
    }
    cin >> t;
    while (t--)
    {
        tc++;
        case_(tc);
        ll n;
        cin >> n;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ans ^= dp[x];
        }
        if (!ans)
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Alice\n";
        }
    }
}
