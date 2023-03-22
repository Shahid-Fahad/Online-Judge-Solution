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

//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};,
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v1, v2;
        ll s1 = 0, s2 = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v1.pb(x);
        }
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v2.pb(x);
        }
        sort(v1.rbegin(), v1.rend());
        sort(v2.rbegin(), v2.rend());
        ll x = n - (n / 4);
        ll me[n + 5], op[n + 5];
        ll sum = 0;
        deque<ll> d1, d2;
        for (ll i = 0; i < x; i++)
        {
            sum = sum + v1[i];
            me[i + 1] = sum;
        }
        for(ll i=0;i<x;i++)
            d1.push_front(v1[i]);

        ll a = sum;
        ll sum1 = 0;
        sum=0;
        for (ll i = 0; i < v1.size(); i++)
        {
            sum=sum+v2[i];
            if(i<x)
            sum1 = sum1 + v2[i];
            op[i + 1] = sum;
        }
        ll b = sum1;
        ll ad = 0;
        if (a >= b)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            ll h=n;
            while (1)
            {
                //cout << a << " " <<b<< endl;
                ad++;
                ll p=x;
                h++;
                x = h - (h/ 4);
                if(x==p)
                {
                   ll df = 100 - d1.front();
                //cout << "df " << df << endl;
                   d1.pop_front();
                   d1.push_back(100);
                   a = a + df;

                }
                else
                {
                    //cout << "X " << x  << " " << op[x]<< endl;
                    a = a+100;
                    if(x>n)
                    b= op[n];
                    else
                    b = op[x];
                }

                if (a >= b)
                {
                    cout << ad << endl;
                    break;
                }
            }
        }
    }
}
