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
//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
struct L
{
    ll off, on;
};
string s;
L st[400005];
ll lazy[400005];
void build(ll si, ll ss, ll se)
{
    if (ss == se)
    {
        if (s[ss] == '0')
        {
            st[si].off = 1;
            st[si].on = 0;
        }
        else
        {
            st[si].off = 0;
            st[si].on = 1;
        }
        return;
    }
    ll mid = (ss + se) / 2;
    build(2 * si, ss, mid);
    build(2 * si + 1, mid + 1, se);
    st[si].off = st[2 * si].off + st[2 * si + 1].off;
    st[si].on = st[2 * si].on + st[2 * si + 1].on;
}
void update(ll si, ll ss, ll se, ll qs, ll qe)
{
    if (lazy[si] != 0)
    {
        if (lazy[si] % 2 == 1)
        {
            swap(st[si].off, st[si].on);
        }
        if (ss != se)
        {
            lazy[2 * si] += (lazy[si] % 2);
            lazy[2 * si + 1] += (lazy[si] % 2);
        }
        lazy[si] = 0;
    }
    if (se < qs || qe < ss)
        return;
    else if (qs <= ss && qe >= se)
    {
        swap(st[si].off, st[si].on);
        if (ss != se)
        {
            lazy[2 * si]++;
            lazy[2 * si + 1]++;
        }
        return;
    }
    ll mid = (ss + se) / 2;
    update(2 * si, ss, mid, qs, qe);
    update(2 * si + 1, mid + 1, se, qs, qe);
    st[si].off = st[2 * si].off + st[2 * si + 1].off;
    st[si].on = st[2 * si].on + st[2 * si + 1].on;
}
ll query(ll si, ll ss, ll se, ll qs, ll qe)
{
    if (lazy[si] != 0)
    {
        if (lazy[si] % 2 == 1)
        {
            swap(st[si].off, st[si].on);
        }
        if (ss != se)
        {
            lazy[2 * si] += (lazy[si] % 2);
            lazy[2 * si + 1] += (lazy[si] % 2);
        }
        lazy[si] = 0;
    }
    if (se < qs || qe < ss)
        return 0;
    else if (ss==se)
    {
        if(st[si].on)
        return 1;
        else
        return 0;
    }
    ll mid = (ss + se) / 2;
    return query(2 * si, ss, mid, qs, qe) + query(2 * si + 1, mid + 1, se, qs, qe);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1, tc = 0;
    cin >> t;
    while (t--)
    {
        tc++;
        case_(tc);
        cout << endl;
        string x;
        cin >> x;
        s = " ";
        s+=x;
        mem(st,0),mem(lazy,0);
        ll n = s.size();
        ll q;
        cin >> q;
        build(1,1,n);
        while (q--)
        {
            char c;
            cin >> c;
            if (c == 'I')
            {
                ll l,r;
                cin>>l>>r; 
                update(1,1,n,l,r);
            }
            else
            {
                ll id;
                cin>>id;
                cout << query(1,1,n,id,id) << endl;
            }
        }
    }
}
