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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //cin >> t;
    string s;
    while (getline(cin, s))
    {
      //  cin.ignore();
        stringstream ss(s);
        ll x, n = 1;
        ll arr[105];
        while (ss >> x)
        {
            if (x == -999999)
                break;
            arr[n++] = x;
        }
        ll maxv,minv;
        maxv=minv= arr[1];
        ll mx = arr[1];
        for (ll i = 2; i < n; i++)
        {
            ll a = maxv * arr[i];
            ll b = minv * arr[i];
            maxv = max({a, arr[i], b});
            minv = min({a, arr[i], b});
            if (arr[i] == 0)
            {
                maxv = 1;
                minv = 1;
                mx = max(mx,0LL);
            }
            else
            mx = max({maxv,minv,mx});
        }
        cout  <<  mx << endl;
    }
}