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

//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll arr[n + 5];
        ll upd[n + 5] = {0};
        ll inc[m + 5] = {0};
        map<ll, vector<ll>> mp;
        for (ll i = 1; i <= n; i++)
            cin >> arr[i];
        for (ll i = 1; i <= m; i++)
        {
            ll x, y, z;
            cin >> x >> y >> z;
            mp[i] = {x, y, z};
        }
        while (k--)
        {
            ll x, y;
            cin >> x >> y;
            inc[x]++;
            inc[y + 1]--;
        }
        map<ll, ll> prc;
        ll cnt = 0;
        for (ll i = 1; i <= m; i++)
        {
            cnt += inc[i];
            prc[i] = cnt;
        }
        for (auto it : prc)
        {
            mp[it.ff][2] *= it.ss;
        }

        cnt = 0;
        for (ll i = 1; i <= m; i++)
        {
            ll p = mp[i][0], q = mp[i][1];
            upd[p] += mp[i][2];
            upd[q + 1] += -mp[i][2];
        }
        for (ll i = 1; i <= n; i++)
        {
            cnt += upd[i];
            arr[i] += cnt;
        }
        for (ll i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
