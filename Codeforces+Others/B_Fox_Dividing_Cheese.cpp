///Bismillahir Rahmanir Rahim
//ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pll pair<ll, ll>
#define vp vector<pair<ll, ll>>
#define pb push_back
#define ff first
#define ss second
#define case_(tc) cout << "Case " << tc << ": ";
#define mem(a, b) memset(a, b, sizeof(a))
#define all(qz) qz.begin(), qz.end()
#define rall(qz) qz.rbegin(), qz.rend()

#define pi acos(-1.0)
#define tani(a) atan(a) / (pi / 180)
#define sini(a) asin(a) / (pi / 180)
#define cosi(a) cos(a) / (pi / 180)
#define cos(a) cos(a *pi / 180)
#define sin(a) sin(a *pi / 180)
#define tan(a) tan(a *pi / 180)
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
        ll a, b;
        cin >> a >> b;
        ll ca2, ca3, ca5, cb2, cb3, cb5;
        ca2 = ca3 = ca5 = cb2 = cb3 = cb5 = 0;
        while (1)
        {
            ll f1 = 0, f2 = 0;
            if (a % 2 == 0)
            {
                a = a / 2;
                ca2++;
                f1++;
            }
            else if (a % 3 == 0)
            {
                a /= 3;
                ca3++;
                f1++;
            }
            else if (a % 5 == 0)
            {
                a /= 5;
                ca5++;
                f1++;
            }
            
            if (b % 2 == 0)
            {
                b = b / 2;
                cb2++;
                f2++;
            }
            else if (b % 3 == 0)
            {
                b /= 3;
                cb3++;
                f2++;
            }
            else if (b % 5 == 0)
            {
                b /= 5;
                cb5++;
                f2++;
            }
            if (f1 == 0 && f2 == 0)
            {
                if (a == b)
                {
                    cout << abs(ca2 - cb2) + abs(ca3 - cb3) + abs(ca5 - cb5) << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
                return 0;
            }
        }
    }
}
