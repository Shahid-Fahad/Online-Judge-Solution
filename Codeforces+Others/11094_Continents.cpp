///Bismillahir Rahmanir Rahim
//ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pll pair<ll, ll>
#define vp vector<pair<ll, ll>>
#define pb push_back
#define ff first
#define ss second
#define case_(tc) cout << "Case " << tc << ": ";
#define mem(a, b) memset(a, b, sizeof(a))
#define all(qz) qz.begin(), qz.end()
#define rall(qz) qz.rbegin(), qz.rend()

#define pi acos(-1.0)
#define tani(a) atan(a) / (pi / 180)
#define sini(a) asin(a) / (pi / 180)
#define cosi(a) cos(a) / (pi / 180)
#define cos(a) cos(a *pi / 180)
#define sin(a) sin(a *pi / 180)
#define tan(a) tan(a *pi / 180)
const ll mod = 1e9 + 7;

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define dbg cout << "EKHANE" << endl;

ll Pow(ll c, ll d)
{
    return d == 0 ? 1 : c * pow(c, d - 1);
}
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return ((a * b) / gcd(a, b));
}

ll egcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll gcd = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return gcd;
}
ll bigMod(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

inline ll MOD(ll a)
{
    return (a % mod + mod) % mod;
}
inline ll modAdd(ll a, ll b)
{
    return MOD(MOD(a) + MOD(b));
}
inline ll modSub(ll a, ll b)
{
    return MOD(MOD(a) - MOD(b));
}
inline ll modMul(ll a, ll b)
{
    return MOD(MOD(a) * MOD(b));
}
inline ll modInv(ll a)
{
    return bigMod(a, mod - 2);
}

ll dx[] = {-1, 0, 1, 0};
ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
ll n, m, x, y, nd = 0;
char ch;
char arr[25][25];
ll vis[25][25];
ll vis2[25][25];
vector<pair<ll,ll>>path;
ll sz[25][25];
bool isvalid(ll i, ll j)
{
    if (i < 0 || j < 0 || i > n - 1 || j > m - 1 || vis[i][j] == 1 || arr[i][j] != ch)
        return false;
    return true;
}
void dfs(ll x, ll y)
{
    vis[x][y] = 1;
    nd++;
    path.pb({x,y});
    for (ll i = 0; i < 4; i++)
    {
        ll X = dx[i] + x;
        ll Y = dy[i] + y;
        if (i == 1)
        {
            if (y == m - 1)
            {
                Y=0;
            }
        }
        if (i == 3)
        {
            if (y == 0)
            {
                Y = m - 1;
            }
        }
        if (isvalid(X, Y))
            dfs(X, Y);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //cin >> t;
    while (cin >> n >> m)
    {
        memset(vis, 0, sizeof(vis));
        memset(sz, 0, sizeof(sz));
        memset(vis2, 0, sizeof(vis2));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        cin >> x >> y;
        ch = arr[x][y];
        vector<pair<ll,ll>>own;
        dfs(x,y);
        own=path;
        for(ll k=0; k<own.size(); k++)
        {
            vis2[own[k].ff][own[k].ss]=1;
        }
        path.clear();
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (arr[i][j] == ch && vis2[i][j] == 0)
                {
                    nd = 0;
                    memset(vis,0,sizeof(vis));
                    for(ll k=0; k<own.size(); k++)
                    {
                        vis[own[k].ff][own[k].ss]=1;
                    }
                    dfs(i, j);
                    for(ll k=0; k<path.size(); k++)
                    {
                        vis2[path[k].ff][path[k].ss]=1;
                    }
                    path.clear();
                    if (i == x && j == y)
                        continue;
                    ans = max(ans, nd);
                }
            }
        }
        cout << ans << endl;
    }
}
