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
ll arr[200005], st[1000005], lazy[1000005];
ll mn = 1e18;
void build(ll si, ll ss, ll se)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return;
    }
    ll mid = (ss + se) / 2;
    build(2 * si, ss, mid);
    build(2 * si + 1, mid + 1, se);
    st[si] = min(st[2 * si], st[2 * si + 1]);
}
void update(ll si, ll ss, ll se, ll qs, ll qe, ll val)
{
    if (lazy[si] != 0)
    {
        ll dx = lazy[si];
        lazy[si] = 0;
        st[si] += dx;
        if (ss != se)
        {
            lazy[2 * si] += dx;
            lazy[2 * si + 1] += dx;
        }
    }
    if (se < qs || qe < ss)
        return;
    else if (qs <= ss && qe >= se)
    {
        ll dx = val;
        st[si] += dx;
        if (ss != se)
        {
            lazy[2 * si] += dx;
            lazy[2 * si + 1] += dx;
        }
        return;
    }
    ll mid = (ss + se) / 2;
    update(2 * si, ss, mid, qs, qe, val);
    update(2 * si + 1, mid + 1, se, qs, qe, val);

    st[si] = min(st[2 * si], st[2 * si + 1]);
}
ll query(ll si, ll ss, ll se, ll qs, ll qe)
{
    if (lazy[si] != 0)
    {
        ll dx = lazy[si];
        lazy[si] = 0;
        st[si] += dx;
        if (ss != se)
        {
            lazy[2 * si] += dx;
            lazy[2 * si + 1] += dx;
        }
    }
    if (se < qs || qe < ss)
        return 1e18;
    else if (qs <= ss && qe >= se)
    {
        return st[si];
    }
    ll mid = (ss + se) / 2;
    return min(query(2 * si, ss, mid, qs, qe), query(2 * si + 1, mid + 1, se, qs, qe));
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
        int n, q;
        cin >> n;
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        build(1, 1, n);
        cin >> q;
        cin.ignore();
        while (q--)
        {
            string s;
            getline(cin, s);
            stringstream ss(s);
            vector<ll> v;
            ll x;
            while (ss >> x)
            {
                v.pb(x);
            }
            v[0]++, v[1]++;
            if (v.size() == 2)
            {
                if (v[0] <= v[1])
                {
                    cout << query(1, 1, n, v[0], v[1]) << endl;
                }
                else
                {

                    cout << min(query(1, 1, n, 1, v[1]), query(1, 1, n, v[0], n))<< endl;
                }
            }
            else
            {
              
                if (v[0] <= v[1])
                    update(1, 1, n, v[0], v[1], v[2]);
                else
                {
                    update(1, 1, n, 1, v[1], v[2]);
                    update(1, 1, n, v[0], n, v[2]);
                }
            }
        }
    }
}
