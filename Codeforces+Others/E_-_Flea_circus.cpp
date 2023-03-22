///Bismillahir Rahmanir Rahim
//ShzFahad
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
#define debug(x) cout << "TEST1 " << x << endl;
const ll mod = 1e9 + 7;
#define PI (acos(-1.0))
#define torad(x) ((x) * ((2 * acos(0)) / 180.0))
#define todeg(x) ((x) * (180.0 / (2 * acos(0))))
#define fixAngle(x) ((x) > 1 ? 1 : (x) < -1 ? -1 \
                                            : (x))
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
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
vector<ll> v[5005];
ll depth[5005], up[5005][15], vis[5005];
ll n;
ll vis2[5005];
ll dis2[5005];
void dfs2(ll n)
{
    vis2[n]=1;
    for(auto child:v[n])
    {
        if(vis2[child]==0)
        {
            dis2[child] = dis2[n]+1;
            dfs2(child);
        }
    }
}
void dfs(ll n)
{
    vis[n] = 1;
    for (auto child : v[n])
    {
        if (vis[child] == 0)
        {
            up[child][0] = n;
            depth[child] = depth[n] + 1;
            for (ll i = 1; i < 15; i++)
            {
                up[child][i] = up[up[child][i - 1]][i - 1];
            }
            dfs(child);
        }
    }
}
void lca(ll a, ll b,ll dd)
{
    if (a == b)
    {
        cout << "The fleas meet at " << a << ".\n";
        return;
    }
   // cout <<  a << " " << b << " " << dd << endl;
   // cout << a << " " << b << " " << depth[a] << " " << depth[b] << endl;
    if (depth[a] < depth[b])
        swap(a, b);
    ll ma=a;
    ll k = dd;
    for (ll i = 14; i >= 0; i--)
    {
        ll f = (k / 2) & (1 << i);
        if (f)
        {
            a = up[a][i];
            b = up[b][i];
        }
    }
    if (k % 2 == 0)
    {
        cout << "The fleas meet at " << a << ".\n";
        return;
    }
    else
    {
        ll x = a;
        a=ma;
        for (ll i = 14; i >= 0; i--)
        {
            ll f = ((k / 2)+1) & (1 << i);
            if (f)
            {
                a = up[a][i];
            }
        }
        cout << "The fleas jump forever between " << min(x,a) << " and " << max(a,x) << ".\n";
        return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1, tc = 0;
    //cin >> t;
    while (t--)
    {
        //tc++;case_(tc);
        ll n;
        while (cin >> n)
        {
            if (n == 0)
                break;
            for(ll i=1;i<=n;i++)
            v[i].clear();
            mem(depth,0);mem(up,0);mem(vis,0);
            for (ll i = 0; i < n - 1; i++)
            {
                ll x, y;
                cin >> x >> y;

                v[x].pb(y);
                v[y].pb(x);
            }
            dfs(1);
            ll q;
            cin >> q;
            while (q--)
            {
                ll x, y;
                cin >> x >> y;
                mem(vis2,0);
                mem(dis2,0);
                dfs2(x);
                lca(x, y,dis2[y]);
            }
        }
    }
}
