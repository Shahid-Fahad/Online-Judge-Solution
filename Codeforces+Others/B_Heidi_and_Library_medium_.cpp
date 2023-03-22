///Bismillahir Rahmanir Rahim
//ShzFahad
#include <bits/stdc++.h>
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
const ll mod = 1e9 + 7;

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
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
int main()
{
    /*সেটের মধ্যে যে Value Future এ আবার আসতে সবচেয়ে বেশি টাইম লাগবে ওকে
    Delete করব*/
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v;
        set<ll> s1[n + 5];
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.pb(x);
            s1[x].insert(i);
        }
        set<pair<ll, ll>> s2;
        set<ll> s3;
        ll ans = 1;
        s1[v[0]].erase(*s1[v[0]].begin());
        if (s1[v[0]].size() == 0)
        {
            s2.insert({1e18, v[0]});
        }
        else
        s2.insert({*s1[v[0]].begin(), v[0]});

        s3.insert(v[0]);

        for (ll i = 1; i < n; i++)
        {
            s1[v[i]].erase(*s1[v[i]].begin());
            if (s3.find(v[i]) == s3.end())
            {
                ans++;
                if (s3.size() < k)
                {
                    s3.insert(v[i]);
                    if (s1[v[i]].size() == 0)
                    {
                        s2.insert({1e18, v[i]});
                    }
                    else
                        s2.insert({*s1[v[i]].begin(), v[i]});
                    continue;
                }
                ll k = (--s2.end())->ss;
                ll f = (--s2.end())->ff;
                s2.erase({f, k});
                s3.erase(k);
                s3.insert(v[i]);
                if (s1[v[i]].size() == 0)
                {
                    s2.insert({1e18, v[i]});
                }
                else
                    s2.insert({*s1[v[i]].begin(), v[i]});
            }
            else
            {
                s2.erase({i, v[i]});
                if (s1[v[i]].size() == 0)
                {
                    s2.insert({1e18, v[i]});
                }
                else
                    s2.insert({*s1[v[i]].begin(), v[i]});
            }
        }
        cout << ans << endl;
    }
}