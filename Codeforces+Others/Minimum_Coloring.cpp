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

template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T, typename R>
using omap = tree<T, R, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define endl '\n'
ll dx[] = {-1, 0, 1, 0};
ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1, tc = 0;
    cin >> t;
    while (t--)
    {
        //tc++;case_(tc);
        ll n, m;
        cin >> n >> m;
        ll arr[n + 5][m + 5];
        mem(arr, 0);
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        arr[x1][y1] = 1;
        arr[x2][y2] = 2;

        ll vis[n + 5][m + 5] = {0};
        queue<vector<ll>> q;

        vis[x1][y1] = 1;
        vis[x2][y2] = 1;
        q.push({x1, y1,1});
        q.push({x2,y2,2});
        while (q.size() > 0)
        {
            ll cx = q.front()[0];
            ll cy = q.front()[1];
            ll cz = q.front()[2];
            ll fx;
            if(cz==1)
            fx=2;
            else
            fx=1;
            q.pop();
            for (ll i = 0; i < 4; i++)
            {
                ll X = dx[i] + cx;
                ll Y = dy[i] + cy;
                if (X >= 1 && Y >= 1 && X <= n && Y <= m && vis[X][Y] == 0)
                {
                    if (arr[X + 1][Y] !=fx && arr[X - 1][Y] != fx && arr[X][Y + 1] != fx && arr[X][Y - 1] != fx)
                    {
                        arr[X][Y] = fx;
                        vis[X][Y] = 1;
                        q.push({X, Y,fx});
                    }
                }
            }
        }


        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                ll freq[6] = {0};
                if (arr[i][j] == 0)
                {
                    if (i + 1 <= n)
                        freq[arr[i + 1][j]]++;
                    if (i - 1 >= 1)
                        freq[arr[i - 1][j]]++;
                    if (j + 1 <= m)
                        freq[arr[i][j + 1]]++;
                    if (j - 1 >= 1)
                        freq[arr[i][j - 1]]++;
                    for (ll f = 1; f <= 5; f++)
                    {

                        if (freq[f] == 0)
                        {
                            arr[i][j] = f;
                            break;
                        }
                    }
                }
            }
        }


        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                cout << arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
