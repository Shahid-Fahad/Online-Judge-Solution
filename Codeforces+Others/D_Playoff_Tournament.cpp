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
//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1, tc = 0;
    //cin >> t;
    while (t--)
    {
        //tc++;case_(tc);
        ll k;
        string s;
        cin >> k >> s;
        ll node = 2 * (1 << k) - 1; /// 2^k ta team + (2^k-1) ta match
        pair<ll, char> arr[node + 5];

        for (ll i = (1 << k); i <= node; i++) /// base case
            arr[i].ff = 1;
        ll in = 0;
        for (ll i = k - 1; i >= 0; i--) /// level order e tree traversal
        {
            ll nil = (1 << i); /// node in ith level;
            ll nn = (1 << i);  ///node number;
            while (nil--)
            {
                if (s[in] == '1')
                    arr[nn].ff = arr[2 * nn + 1].ff; /// left er node tai boro node
                else if (s[in] == '0')
                    arr[nn].ff = arr[2 * nn].ff;
                else
                    arr[nn].ff = arr[2 * nn + 1].ff + arr[2 * nn].ff; /// dui side er e sum;
                arr[nn].ss = s[in];
                in++;
                nn++;
            }
        }
        ll q;
        cin >> q;
        while (q--)
        {
            ll p, nn;
            char c;
            cin >> p >> c;
            for (ll i = k - 1; i >= 0; i--)
            {
                ll nil = (1 << i);
                if (p <= nil)
                {
                    nn = nil + p - 1;
                    arr[nn].ss = c;
                    break;
                }
                else
                    p -= nil;
            }
            while (nn)
            {
                if (arr[nn].ss == '1')
                    arr[nn].ff = arr[2 * nn + 1].ff; /// left er node tai boro node
                else if (arr[nn].ss == '0')
                    arr[nn].ff = arr[2 * nn].ff;
                else
                    arr[nn].ff = arr[2 * nn + 1].ff + arr[2 * nn].ff; /// dui side er e sum;
                nn /= 2;                                              /// parent e jacchi
            }
            cout << arr[1].ff << endl; // root = final match
        }
    }
}
