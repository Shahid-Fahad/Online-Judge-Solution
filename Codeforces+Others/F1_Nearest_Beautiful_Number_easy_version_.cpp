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
        ll n, k;
        cin >> n >> k;
        ll sz = to_string(n).size();
        ll mn = n;
        ll g = 0;
        while (n >= 100)
        {
            n = n / 10;
        }
        ll si = n % 10;
        ll fi = (n / 10) % 10;
        if (sz == 1)
        {
            fi = si;
            k = 1;
        }
        if (k == 1)
        {
            ll a = fi, b = fi + 1;
            for (ll i = 1; i <= sz - 1; i++)
            {
                a = (a * 10) + fi;
                b = (b * 10) + (fi + 1);
            }
            if (a >= mn)
                cout << a << endl;
            else
                cout << b << endl;
        }
        else
        {
            if (fi == si)
            {
                string x = to_string(mn);
                ll fc = fi + '0';
                ll sc = fc;
                for (ll i = 2; i < x.size(); i++)
                {
                    if (x[i] != fc)
                    {
                        sc = x[i];
                        break;
                    }
                }
                char pc = fc;
                if (sc != '0')
                {
                    ll f=0;
                    pc = min(fc, sc);
                    for (ll i = 0; i < x.size(); i++)
                    {
                        if (f==0&&x[i] != fc && x[i] != sc)
                            {
                                f=1;
                                if(x[i]>pc)
                                x[i]=max(fc,sc);
                                else
                                x[i] = pc;
                            }
                        else if(f==1)
                        {
                            x[i]=pc;
                        }
                    }
                }
                else
                {
                    ll f=0;
                    for (ll i = 0; i < x.size(); i++)
                    {
                        if (f==0&&x[i] != fc && x[i] != sc)
                            {
                                f=1;
                                x[i] = pc;
                            }
                        else if(f==1)
                        {
                            x[i]='0';
                        }
                    }
                }
                cout << x << endl;
                continue;
            }

            ll a[5];
            a[1] = a[2] = a[3] = a[4] = fi;
            a[1] = a[1] * 10 + si, a[2] = a[2] * 10 + (si + 1), a[3] = a[1], a[4] = a[2];
            ll inc = fi;
            if (si + 1 == fi)
                inc = 0;
            for (ll i = 1; i <= sz - 2; i++)
            {
                a[1] = a[1] * 10 + fi;
                a[2] = a[2] * 10 + inc;
                a[3] = a[3] * 10 + (si);
                a[4] = a[4] * 10 + (si + 1);
            }
            sort(a + 1, a + 4 + 1);
            cout << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl;
            if (a[1] >= mn)
                cout << a[1] << endl;
            else if (a[2] >= mn)
                cout << a[2] << endl;
            else if (a[3] >= mn)
                cout << a[3] << endl;
            else
                cout << a[4] << endl;
        }
    }
}




