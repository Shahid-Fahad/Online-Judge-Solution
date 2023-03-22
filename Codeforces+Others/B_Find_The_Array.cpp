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
#define case (tc) cout << "Case " << tc << ": " << endl;
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n + 5];
        ll mx = 0;
        ll arr2[n + 5], arr3[n + 5], f = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr2[i] = arr[i];
            arr3[i] = arr[i];
            mx = max(arr[i], mx);
        }

        for (ll i = 0; i < n; i = i + 2)
        {
            arr2[i] = 1;
        }
        for (ll i = 1; i < n; i = i + 2)
        {
            arr3[i] = 1;
        }
        ll s = 0, s2 = 0, s3 = 0;
        for (ll i = 0; i < n; i++)
        {
            s = s + arr[i];
            s2 = s2 + abs(arr2[i] - arr[i]);
        }
        
        for (ll i = 0; i < n; i++)
        {
            s3 = s3 + abs(arr3[i] - arr[i]);
        }
        if (s2 < s3)
        {
            for (ll i = 0; i < n; i++)
                cout << arr2[i] << " ";
            cout << endl;
        }
        else
        {
            for (ll i = 0; i < n; i++)
                cout << arr3[i] << " ";
            cout << endl;
        }
    }
}
