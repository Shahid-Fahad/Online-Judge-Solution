#include "bits/stdc++.h"
using namespace std;
#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll

template <typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &a)
{
    in >> a.fr >> a.sc;
    return in;
}
template <typename T1, typename T2>
ostream &operator<<(ostream &out, pair<T1, T2> a)
{
    out << a.fr << " " << a.sc;
    return out;
}
template <typename T, typename T1>
T amax(T &a, T1 b)
{
    if (b > a)
        a = b;
    return a;
}
template <typename T, typename T1>
T amin(T &a, T1 b)
{
    if (b < a)
        a = b;
    return a;
}

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 0;

vector<pair<int, int>> v[200005];
int siz[200005];
int dfs_sz(int z, int p = 0)
{
    siz[z] = 1;
    for (pii x : v[z])
    {
        if (x.fr == p)
            continue;
        siz[z] += dfs_sz(x.fr, z);
    }
    return siz[z];
}

vector<int> tmp;
void dfs(int z, int p = 0)
{
    for (pii x : v[z])
    {
        if (x.fr == p)
            continue;
        if (x.sc == 1)
        {
            tmp.pb(siz[x.fr]);
            continue;
        }
        dfs(x.fr, z);
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    // v.clear();
    // v.resize(n + 1);
    // siz.clear();
    // siz.resize(n + 1);
    tmp.clear();
    for (int i = 1; i <= n; i++)
    {
        v[i].clear();
        siz[i] = 1;
    }

    rep(i, 1, n)
    {
        int x, y, z;
        cin >> x >> y >> z;
        v[x].pb({y, z});
        v[y].pb({x, z});
    }

    dfs_sz(1);

    dfs(1);
    sort(tmp.rbegin(), tmp.rend());
    int tot = n;
    int ans = 0;
    for (int i = 0; i < tmp.size() && k < tot; i++)
    {
        tot -= tmp[i];
        ans++;
    }

    if (tot > k)
        ans = -1;
    cout << ans << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
