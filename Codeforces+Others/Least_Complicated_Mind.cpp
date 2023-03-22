///Bismillahir Rahmanir Rahim
//ShzFahad
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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

vector<long long int> prime;
vector<bool> mark(1000010, true);
vector<ll> hp(1000010, 0);
void sieve(ll n)
{
    ll i, j;
    prime.clear();
    mark[0] = mark[1] = false;
    for (ll i = 2; i <= n; i++)
    {
        if (mark[i] == true)
        {
            prime.push_back(i);
            hp[i] = i;
            for (ll j = 2 * i; j <= n; j += i)
            {
                mark[j] = false;
                hp[j] = i;
            }
        }
    }
}
deque<ll> pf;
void primefactors(ll n)
{
    while (n > 1)
    {
        ll pr = hp[n];
        while (n % pr == 0)
        {
            n = n / pr;
            pf.push_back(pr);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1, tc = 0;
    sieve(1000004);
    cin >> t;
    while (t--)
    {
        //tc++;case_(tc);
        pf.clear();
        ll n;
        cin >> n;
        vector<pair<ll, ll>> fx;
        int one = 0, ign = 0;
        unordered_map<ll, ll> mp, used;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x == 1)
                one++;
            else
            {
                if (mark[x])
                {
                    if (used[x])
                    {
                        ign++;
                        continue;
                    }
                    used[x] = 1;
                }
                primefactors(x);
            } ///log(n)
        }
        ll ans = 1;
        ll lc = 1;
        sort(all(pf));
        for (auto it : pf)
        {
            mp[it]++;
        }
        if (one == n)
        {
            cout << 1 << endl;
            continue;
        }
        n -= one;
        n -= ign;
        for (auto it : mp)
        {
            ll ft = it.ss;
            ll k = 1;
            while (ft--)
            {
                k = modMul(k, it.ff);
            }
            fx.pb({k, it.ff});
        }
        sort(all(fx));
        if (fx.size() > n)
        {
            for (ll i = n; i < fx.size(); i++)
            {
                ans = modMul(ans, fx[i].ff);
            }
            while (fx.size() > n)
                fx.pop_back();

            fx.back().ff = modMul(fx.back().ff, ans);
        }
        else if (fx.size() < n)
        {
            ll it = 0;
            while (fx.size() < n)
            {
                if (fx[it].ff == fx[it].ss)
                    it++;
                fx.pb({fx[it].ss, fx[it].ss});
                fx[it].ff /= fx[it].ss;
            }
        }

        for(ll i=0;i<fx.size();i++)
        {
            cout<<fx[i].ff<<" ";
        }
        cout<<endl;

        for (ll i = 0; i < fx.size(); i++)
        {
            ll gc = gcd(lc, fx[i].ff);
            lc = modMul(lc, modInv(gc));
            lc = modMul(lc, fx[i].ff);
        }
        cout << lc << endl;
    }
}
