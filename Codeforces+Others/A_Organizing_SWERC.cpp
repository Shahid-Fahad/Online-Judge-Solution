#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <vector>
#include <bitset>
#include <string>
#include <cstring>
#include <cassert>
#include <cstdio>
#include <cmath>
#include <random>
#include <chrono>
#define all(v) (v).begin(), (v).end()
#define unq(v) (v).erase(unique(all(v)), (v).end())
#define sz(v) ((int)(v).size())
#define pii pair<int, int>
#define pli pair<ll, int>
#define pil pair<int, ll>
#define pll pair<ll, ll>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define MULTI  \
    int _T;    \
    cin >> _T; \
    while (_T--)
#define sqr(x) ((x) * (x))
#define yesno(x) cout << ((x) ? "Yes" : "No") << endl
#define test cerr << '!' << endl;
using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;

void main0();
int main()
{
    clock_t start, end;
#ifndef ONLINE_JUDGE
    freopen("file.in", "r", stdin);
    start = clock();
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    main0();
#ifndef ONLINE_JUDGE
    end = clock();
    cout << "( " << (end - start) << " ms )" << endl;
    fclose(stdin);
#endif
    return 0;
}

const int dx[8] = {0, 1, -1, 0, 1, 1, -1, -1};
const int dy[8] = {1, 0, 0, -1, 1, -1, -1, 1};
const int N = 2e5 + 5;
const int M = 1e5;
const int INF = 0x3f3f3f3f;
const ll INFF = 0x3f3f3f3f3f3f3f3f;
const int mod = 1e9 + 7;
const double eps = 1e-6;
mt19937 rnd((uint)chrono::steady_clock::now().time_since_epoch().count());
template <typename T>
bool chkmin(T &x, T y) { return y < x ? x = y, 1 : 0; }
template <typename T>
bool chkmax(T &x, T y) { return y > x ? x = y, 1 : 0; }

int n;
int a[N];
int b[N];
int c[N];

vector<int> v[N];
int vis[N];
vector<int> path;
void dfs(int u, int fa)
{
    if (vis[u])
        return;
    path.pb(u);
    vis[u] = 1;
    for (int v : v[u])
        if (v != fa)
        {
            dfs(v, u);
        }
}

void main0()
{
    MULTI
    {
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            cin >> b[i];
        }
        set<int> s;
        for (int i = 1; i <= n; ++i)
        {
            cin >> c[i];
            if (c[i])
                s.insert(c[i]);
        }

        for (int i = 1; i <= n; ++i)
        {
            v[i].clear();
            vis[i] = 0;
        }
        for (int i = 1; i <= n; ++i)
        {
            v[a[i]].pb(b[i]);
        }

        ll ans = 1;
        for (int i = 1; i <= n; ++i)
        {
            path.clear();
            dfs(i, -1);

            int succ = 1;
            if (sz(path) <= 1)
                succ = 0;
            for (int u : path)
            {
                if (s.count(u))
                    succ = 0;
            }
            if (succ)
                ans = ans * 2 % mod;
        }
        cout << ans << endl;
    }
}