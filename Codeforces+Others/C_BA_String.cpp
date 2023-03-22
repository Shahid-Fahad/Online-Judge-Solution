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
#define PI (acos(-1.0))
#define torad(x) ((x) * ((2 * acos(0)) / 180.0))
#define todeg(x) ((x) * (180.0 / (2 * acos(0))))
#define fixAngle(x) ((x) > 1 ? 1 : (x) < -1 ? -1 \
                                            : (x))

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
map<string, map<char, ll>> mp;
bool comp(string a, string b)
{
    if (lexicographical_compare(all(a), all(b)))
        return true;
    else
        return false;
}
ll dif(string a, string b)
{
    auto mp1 = mp[a];
    auto mp2 = mp[b];
    char c = 'A';
    ll ans = 0;
    while (c <= 'Z')
    {
        if (mp1.find(c) == mp1.end() && mp2.find(c) == mp2.end())
        {
            c++;
            continue;
        }
        if (mp1[c] != mp2[c])
            ans++;
        c++;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1, tc = 0;
    cin >> t;
    while (t--)
    {
        //tc++;case_(tc);
        ll n;
        cin >> n;
        vector<string> v;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.pb(s);
        }
        sort(all(v), comp);
        for (ll i = 0; i < v.size(); i++)
        {
            for (ll j = 0; j < v[i].size(); j++)
            {
                mp[v[i]][v[i][j]]++;
            }
        }
        vector<pair<ll, pair<string, string>>> vp;
        ll ans = 1e18;
        pair<string, string> p;
        for (ll i = 0; i < v.size(); i++)
        {
            for (ll j = i + 1; j < v.size(); j++)
            {
                ll k = dif(v[i], v[j]);
                if (k < ans)
                {
                    ans = k;
                    p.ff = v[i];
                    p.ss = v[j];
                }
                else if (k == ans)
                {
                    if (lexicographical_compare(all(v[i]), all(p.ff)))
                    {
                        p.ff = v[i];
                        p.ss = v[j];
                    }
                    else if (v[i] == p.ff)
                    {
                        if (lexicographical_compare(all(v[j]), all(p.ss)))
                        {
                            p.ff = v[i];
                            p.ss = v[j];
                        }
                    }
                }
            }
        }
        cout << p.ff << " " << p.ss << endl;
    }
}
