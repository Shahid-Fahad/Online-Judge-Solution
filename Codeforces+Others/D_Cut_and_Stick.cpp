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
//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
struct S
{
    int l, r, i;
};
int lim = 550, len;
int freq[300005], freq2[300005];
int mxf = -1e9;
multiset<ll> st;
bool operator<(S const &a, S const &b)
{
    ll lb = (a.l / lim), rb = (b.l / lim);
    if (lb == rb)
    {
        if (lb % 2 == 1)
            return a.r > b.r;
        else
            return a.r < b.r;
    }
    else
        return lb < rb;
}
vector<int> v;
vector<S> v2;
int moo;
void add(int n)
{
    int prf = freq[v[n]];
    freq[v[n]]++;
    int crf = freq[v[n]];
    freq2[prf]--;
    freq2[crf]++;
    mxf = max(mxf, freq[v[n]]);
}
void err(int n)
{
    int prf = freq[v[n]];
    freq[v[n]]--;
    int crf = freq[v[n]];
    freq2[prf]--;
    freq2[crf]++;
    if (crf < mxf)
    {
        while (freq2[mxf] == 0)
            mxf--;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1, tc = 0;
    //cin >> t;
    while (t--)
    {
        //tc++;case_(tc);
        int n, q;

        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.pb(x);
        }
        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
            v2.pb({l - 1, r - 1, i});
        }
        sort(all(v2));
        int ans[q + 5];
        int l = 0, r = -1;
        for (int i = 0; i < q; i++)
        {
            int rl = v2[i].l, rr = v2[i].r;
            len = rr - rl + 1;
            while (rl < l)
                add(--l);
            while (rr > r)
                add(++r);

            while (rl > l)
                err(l++);

            while (rr < r)
                err(r--);

            int k = ceil(len / 2.0);
            int rem = len-mxf;

            if (mxf <= k)
                moo = 1;
            else
                moo = len-(2*rem);

            ans[v2[i].i] = moo;
        }
        for (int i = 0; i < q; i++)
            cout << ans[i] << endl;
    }
}
