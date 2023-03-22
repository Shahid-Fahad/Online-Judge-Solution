// rotate and rotate solution
/** Bismillahir Rahmanir Rahim **/
#include <bits/stdc++.h>
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define endl '\n'
#define fi first
#define se second
#define ull unsigned ll
#define lld long double
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int tc = 1;
void solve()
{
    int n, m;
    cin >> n >> m;
    int x, len = n / m;
    vector<int> v[len];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i / m].pb(x);
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < m; j++)
        {
            v[i].pb(v[i][j]);
        }
    }

    ll right = 0, left = 0;
    ll a, b, q;
    cin >> q;
    while (q--)
    {
        cin >> a >> b;
        if (a == 0)
            right += b;
        else
            left += b;
    }
    right %= m;
    left %= m;

    int pos = 0, k = 2 * m - 1;
    for (int i = 0; i < right; i++)
    {
        pos--;
        if (pos == -1)
            pos = k;
    }
    for (int i = 0; i < left; i++)
    {
        pos++;
        if (pos == k + 1)
            pos = 0;
    }

    cout << "Case " << tc++ << ": ";
    for (int i = 0; i < len; i++)
    {
        int tmp_pos = pos;
        for (int j = 1; j <= m; j++)
        {
            cout << v[i][tmp_pos] << " ";
            tmp_pos++;
            if (tmp_pos == k + 1)
                tmp_pos = 0;
        }
    }
    cout << endl;
}
int main()
{
    Fastio;
    int tt = 1;
    cin >> tt;
    while (tt--)
        solve();

    return 0;
}
