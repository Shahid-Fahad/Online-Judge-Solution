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
inline ll fixmod(ll a, ll b)
{
    return (a % b + b) % b;
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
inline ll ttp(ll a)
{
    return (1LL << a);
}
//inline ll exp(ll b, ll p,ll m) {ll r=1;while(p) {if(p&1)r=(__int128)r*b%m;b=(__int128)b*b%m;p/=2;}return r;}
bitset<8> toBinary(ll n)
{
    return bitset<8>(n);
}
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
#define pll pair<ll,ll>
const pll M = make_pair(1910270027, 1910270927); ///Should be large primes
const int base = 191027;                         ///Should be a prime larger than highest value
const int N = 5001;                           ///Highest length of string
pll pb[N];                                       ///powers of base mod M
pll invb;
pll operator+(pll a, ll x)
{
    return make_pair(a.ff + x, a.ss + x);
}
pll operator-(pll a, ll x)
{
    return make_pair(a.ff - x, a.ss - x);
}
pll operator*(pll a, ll x)
{
    return make_pair(a.ff * x, a.ss * x);
}
pll operator+(pll a, pll x)
{
    return make_pair(a.ff + x.ff, a.ss + x.ss);
}
pll operator-(pll a, pll x)
{
    return make_pair(a.ff - x.ff, a.ss - x.ss);
}
pll operator*(pll a, pll x)
{
    return make_pair(a.ff * x.ff, a.ss * x.ss);
}
pll operator%(pll a, pll m)
{
    return make_pair(a.ff % m.ff, a.ss % m.ss);
}
ostream &operator<<(ostream &os, pll hash)
{
    return os << "(" << hash.ff << ", " << hash.ss << ")";
}
pll power(pll a, ll p)
{
    if (p == 0)
        return make_pair(1, 1);
    pll ans = power(a, p / 2);
    ans = (ans * ans) % M;
    if (p % 2)
        ans = (ans * a) % M;
    return ans;
}
pll inverse(pll a)
{
    return power(a, (M.ff - 1) * (M.ss - 1) - 1);
}
void hashPre()
{
    pb[0] = make_pair(1, 1);
    for (int i = 1; i < N; i++)
        pb[i] = (pb[i - 1] * base) % M;
    invb = inverse(pb[1]);
}
vector<pll> hashList(string s)
{
    int n = s.size();
    vector<pll> ans(n + 1);
    ans[0] = make_pair(0, 0);

    for (int i = 1; i <= n; i++)
        ans[i] = (ans[i - 1] * base + s[i - 1]) % M;
    return ans;
}
///Calculates hash of substring s[l..r] (1 indexed)
pll substringHash(const vector<pll> &hashlist, int l, int r)
{
    int len = (r - l + 1);
    return ((hashlist[r] - hashlist[l - 1] * pb[len]) % M + M) % M;
}
bitset<5001>ans[16][5001];
int res[20];
int main()
{
    ll t = 1, tc = 0;
    //cin >> t;
    while (t--)
    {
        //tc++;case_(tc);
        hashPre();
        string s, s2;
        cin>>s;
        s2 = s;
        reverse(all(s2));
        auto v = hashList(s);
        auto v2 = hashList(s2);
        int n = s.size();
        ll rs=0;
        for (int i = 1; i <= s.size(); i++)
        {
            for (ll j = 0; j <= s.size() - i; j++)
            {
                auto a = substringHash(v, j + 1, j + i);
                auto b = substringHash(v2, n - (j + i) + 1, (n - (j + i) + 1) + i - 1);
                if (a == b)
                {
                    ans[1][j+1][j+i]=1;
                }
            }
        }
        ll xx = min(15,int(s.size()));
        for (int k = 2; k <=xx ; k++)
        {
           for(int i=1;i<=n;i++)
           {
               for(int j=i+1;j<=n;j++)
               {
                   int l = (j-i+1)/2;
                   auto a = substringHash(v,i,i+l-1);
                   auto b = substringHash(v,j-l+1,j);
                   if((a==b)&&ans[k-1][i][i+l-1]==1)
                    ans[k][i][j]=1;
               }
           }
        }
        
        for (int k = 1; k <= xx; k++)
        {
           for(int i=1;i<=n;i++)
           {
               for(int j=1;j<=n;j++)
               {
                    res[k]+=ans[k][i][j];
               }
           }
        }

        for (int i = 1; i <= n; i++)
            printf("%d ",res[i]);
        printf("\n");
    }
}