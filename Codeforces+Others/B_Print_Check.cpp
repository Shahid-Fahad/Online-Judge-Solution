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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
struct pr
{
    ll a, b, c;
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1, tc = 0;
    //cin >> t;
    while (t--)
    {
        //tc++;case_(tc);
        ll n, m, k;
        cin >> n >> m >> k;
        vector<pr> v(k),sel;
        for(ll i=0;i<k;i++)
        {
            cin >> v[i].a >> v[i].b >> v[i].c;
        }
        //reverse(all(v));
        ll arr[n + 5][m + 5];
        mem(arr, 0);
        ll markr[n + 5] = {0}, markc[m + 5] = {0};
        for (ll i = 0; i < v.size(); i++)
        {
            if(v[i].a==1)
            {
                if(markr[v[i].b]==0)
                {
                    sel.pb(v[i]);
                    markr[v[i].b]==1;
                }
            }
            else
            {
                if(markc[v[i].b]==0)
                {
                    sel.pb(v[i]);
                    markc[v[i].b]==1;
                }
            }
        }
        for(ll i=0;i<sel.size();i++)
        { 
            ll s = sel[i].a, x=sel[i].b , y = sel[i].c;
            if(s==1)
            {
                 for (ll i = 1; i <= m; i++)
                    arr[x][i] = y;
            }
            else 
            {
                 for (ll i = 1; i <= n; i++)
                    arr[i][x] = y;
            }
        }
       


        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}