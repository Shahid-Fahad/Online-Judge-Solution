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
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }

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

inline ll MOD(ll a) { return (a % mod + mod) % mod; }
inline ll modAdd(ll a, ll b) { return MOD(MOD(a) + MOD(b)); }
inline ll modSub(ll a, ll b) { return MOD(MOD(a) - MOD(b)); }
inline ll modMul(ll a, ll b) { return MOD(MOD(a) * MOD(b)); }
inline ll modInv(ll a) { return bigMod(a, mod - 2); }

//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};,
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
ll p, q;
ll vis[105];
vector<pair<ll, ll>> v[105];
vector<ll> path;
map<ll, ll> par;
ll tcol;
void bfs(ll n)
{
    queue<ll> qu;
    vis[n] = 1;
    qu.push(n);
    while (qu.size() > 0)
    {
        ll cr = qu.front();
        qu.pop();
        for (ll i = 0; i < v[cr].size(); i++)
        {
            ll child = v[cr][i].ff;
            ll col = v[cr][i].ss;
            if (vis[child] == 0 && col == tcol)
            {
                par[child] = cr;
                qu.push(child);
                vis[child] = 1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        while (m--)
        {
            ll x, y, z;
            cin >> x >> y >> z;
            v[x].pb({y, z});
            v[y].pb({x, z});
        }
        ll qr;
        cin >> qr;
        while (qr--)
        {
            memset(vis, 0, sizeof(vis));
            path.clear();
            cin >> p >> q;
            set<ll> comcl;
            for (ll i = 0; i < v[p].size(); i++)
            {
                ll f = 0;
                for (ll j = 0; j < v[q].size(); j++)
                {
                   
                    if (v[p][i].ss == v[q][j].ss)
                    {
                        f = 1;
                        break;
                    }
                }
                if (f == 1)
                {
                    comcl.insert(v[p][i].ss);
                }
            }
            ll c = 0;
            for (auto it:comcl)
            {
                memset(vis, 0, sizeof(vis));
                tcol = it;
                bfs(p);
                if (vis[q] != 0)
                    c++;
            }
            cout << c << endl;
        }
    }
}
