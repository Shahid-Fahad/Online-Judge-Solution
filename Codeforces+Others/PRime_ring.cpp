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
#define case_(tc) cout << "Case " << tc << ":";
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

//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};,
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
bool isprime(ll n)
{
    ll x = sqrt(n);
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    for (ll i = 2; i <= x; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
ll n;
ll arr[20];
bool isp(ll p)
{
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == p)
        {
            return false;
        }
    }
    return true;
}
void f(ll c)
{
    if (c == n - 1)
    {
        if (isprime(arr[0] + arr[n - 1]))
        {
            for (ll i = 0; i < n; i++)
            {
                cout << arr[i];
                if(i<n-1)
                cout << " ";
            }
            cout << endl;
        }
        return;
    }
    else
    {
        for (ll i = 1; i <= n; i++)
        {
            if (isprime(i + arr[c]) && isp(i))
            {
                arr[c + 1] = i;
                f(c + 1);
                arr[c + 1] = 0;
            }
        }
        return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc = 0;
    while (cin >> n)
    {
        tc++;
        if (tc > 1)
        {
            cout << endl;
        }
        case_(tc);
        cout << endl;
        memset(arr, 0, sizeof(arr));
        arr[0] = 1;
        f(0);
    }
}
