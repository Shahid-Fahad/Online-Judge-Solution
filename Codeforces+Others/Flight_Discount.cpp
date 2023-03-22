///Bismillahir Rahmanir Rahim
//ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define case_(tc) cout << "Case " << tc << ": ";
#define mem(a, b) memset(a, b, sizeof(a))
#define all(qz) qz.begin(), qz.end()
#define rall(qz) qz.rbegin(), qz.rend()
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
//inline ll exp(ll b, ll p,ll m) {ll r=1;while(p) {if(p&1)r=(__int128)r*b%m;b=(__int128)b*b%m;p/=2;}return r;}
bitset<8> toBinary(ll n) { return bitset<8>(n); }
ll cXOR(ll n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    return 0;
}

//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};

ll n, m;
vector<pair<ll, ll>> v[100005];
ll vis[100005];
ll dis[100005];
ll disc[100005];
ll par[100005];
ll inf = 1e18;
void dij(ll n)
{
    set<pair<ll, pair<ll, ll>>> s;
    s.insert({0, {n, 0}});
    dis[n] = 0;
    vis[n] = 1;
    while (s.size() > 0)
    {
        ll c = s.begin()->ff;
        ll d = s.begin()->ss.ff;
        ll f = s.begin()->ss.ss;
        s.erase(s.begin());
        if ((f == 0 && dis[d] < c) || (f == 1 && disc[d] < c))
        {
            continue;
        }
        for (ll i = 0; i < v[d].size(); i++)
        {

            if (f == 0)
            {
                ll x1 = c + v[d][i].ff;
                ll x2 = c + (v[d][i].ff / 2);
                ll y = v[d][i].ss;
                if (x1 < dis[y])
                {
                    dis[y] = x1;
                    vis[y] = 1;
                    s.insert({x1, {y, 0}});
                }
                if (x2 < disc[y])
                {
                    disc[y] = x2;
                    vis[y] = 1;
                    s.insert({x2, {y, 1}});
                }
            }
            else
            {
                ll x1 = c + v[d][i].ff;
                ll y = v[d][i].ss;
                if (x1 < disc[y])
                {
                    disc[y] = x1;
                    vis[y] = 1;
                    s.insert({x1, {y, 1}});
                }
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
        cin >> n >> m;
        for (ll i = 1; i <= n; i++)
        {
            dis[i] = inf;
            disc[i] = inf;
        }
        while (m--)
        {
            ll x, y, z;
            cin >> x >> y >> z;
            v[x].pb({z, y});
        }
        dij(1);
        cout << disc[n] << endl;
    }
}
