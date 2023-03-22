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
inline ll fixmod(ll a, ll b) { return (a % b + b) % b; }
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
//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
vector<ll>v,cnt;
ll tar;
map<ll, ll> mp;
void f1(ll l, ll r, ll cnt)
{
    //cout << l << " " << r << endl;
    if (l > r)
        return;
    ll fl = (l + r) / 2;
    ll cl = (l + r + 1) / 2;
    bool a = true, b = true;
    if (v[fl] == tar)
    {
        mp[cnt]++;
        a = false;
    }
    if ((l + r) % 2 && v[cl] == tar)
    {
        mp[cnt]++;
        b = false;
    }
    if (a)
    {
        if (v[fl] > tar)
            f1(l, fl - 1, cnt + 1);
        else
            f1(fl + 1, r, cnt + 1);
    }
    if (b&&((l+r)%2))
    {
        if (v[cl] > tar)
            f1(l, cl - 1, cnt + 1);
        else
            f1(cl + 1, r, cnt + 1);
    }
}


void func(int l, int r, int lvl){
    if(l>r) return;
    int mid1 = (l+r)/2, mid2 = (l+r+1)/2;
    bool ok1=true, ok2=true;
    if(v[mid1]==tar){
        cnt[lvl]++;
        ok1=false;
    }
    if((l+r)%2 && v[mid2]==tar){
        cnt[lvl]++;
        ok2=false;
    }
    if(ok1){
        if(v[mid1]<tar) func(mid1+1,r,lvl+1);
        else func(l,mid1-1,lvl+1);
    }
    if(ok2 && (l+r)%2){
        if(v[mid2]<tar) func(mid2+1,r,lvl+1);
        else func(l,mid2-1,lvl+1);
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
        mp.clear();
        //tc++;case_(tc);
        ll n;
        cin >> n;
        v.clear();
        cnt.clear();
        v.resize(n+1);
        cnt.resize(60);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        cin >> tar;
        func(1, n, 1);
        ld tot = 0;
        ll mn = -1;
        for(ll i=1;i<=50;i++)
        {
            if(cnt[i]&&mn==-1)
            mn=i;
            tot+=cnt[i];
        }
        ld ans = (100.0*mn) / tot;
        cout << ans  << endl;
    }
}
