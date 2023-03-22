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
template <typename T>
ll sz(T qz)
{
    ll k = qz.size();
    return k;
}
#define PI (acos(-1.0))
#define torad(x) ((x) * ((2 * acos(0)) / 180.0))
#define todeg(x) ((x) * (180.0 / (2 * acos(0))))
#define fixAngle(x) ((x) > 1 ? 1 : (x) < -1 ? -1 \
                                            : (x))

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
inline ll ttp(ll a) { return (1LL << a); }
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

template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T, typename R>
using omap = tree<T, R, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define endl '\n'
ll dx[] = {-1, 0, 1, 0};
ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
char arr[13][13];
ll vis[13][13];
ll par[13][13];
ll dis[13][13];
string dir = "URDL";
bool isvalid(ll i, ll j)
{
    if (i < 1 || j < 1 || i > 12 || j > 12 || arr[i][j] == '#' || vis[i][j] == 1)
        return false;
    return true;
}
void bfs(ll x, ll y)
{
    vis[x][y] = 1;
    queue<pair<ll, ll>> q;
    q.push({x, y});
    dis[x][y] = 0;
    while (q.size() > 0)
    {
        ll curx = q.front().ff;
        ll cury = q.front().ss;
        q.pop();
        for (ll i = 0; i < 4; i++)
        {
            ll X = curx + dx[i];
            ll Y = cury + dy[i];
            if (isvalid(X, Y))
            {
                vis[X][Y] = 1;
                par[X][Y] = i;
                dis[X][Y] = dis[curx][cury] + 1;
                q.push({X, Y});
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1, tc = 0;
    cin >> t;
    while (t--)
    {
        //tc++;case_(tc);
        ll r, c;
        cin >> r >> c;
        mem(vis,0);
        mem(dis, -1);
        mem(par, -1);
        for (ll i = 1; i <= 12; i++)
            for (ll j = 1; j <= 12; j++)
                arr[i][j] = '.';

        arr[3][3] = arr[3][10] = arr[10][3] = arr[10][10] = '*';
        arr[6][6] = arr[6][7] = arr[7][6] = arr[7][7] = arr[10][2] = arr[10][11] = arr[9][2] = arr[9][3] = arr[9][10] = arr[9][11] = '#';
        bfs(r, c);
        // for(ll i=1;i<=12;i++)
        // {
        //     for(ll j=1;j<=12;j++)
        //     {
        //         cout << dis[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        ll f = 0;
        for (ll i = 1; i <= 12; i++)
        {
            for (ll j = 1; j <= 12; j++)
            {
                if (arr[i][j] == '*')
                {
                    cout << dis[i][j] << endl;
                    ll a = i, b = j;
                    string ans = "";
                    while (par[a][b] != -1)
                    {
                        ans.pb(dir[par[a][b]]);
                        ll ta=a;
                        a -= dx[par[a][b]];
                        b -= dy[par[ta][b]];
                    }
                    reverse(all(ans));
                    cout << ans << endl;
                    f = 1;
                    break;
                }
            }
            if (f)
                break;
        }
    }
}
