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
    ll tc = 1;
    //cin >> t;
    while (tc--)
    {
        string s, t;
        cin >> s >> t;
        if (s.size() == t.size())
        {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            if (s == t)
            {
                cout << "array\n";
            }
            else
            {
                cout << "need tree\n";
            }
        }
        else
        {
            ll f = 0;
            ll sz = t.size();
            map<char, ll> mp, mp2;
            vector<ll> v, v2;
            ll li = 0;
            for (ll i = 0; i < t.size(); i++)
            {
                f = 0;
                ll ind, oi = -1, ui;
                for (ll j = 0; j < s.size(); j++)
                {
                    if (s[j] == t[i])
                    {
                        if (v.size() == 0)
                        {
                            v.pb(j);
                            oi=1;
                            s[j] = '?';
                            f = 1;
                            break;
                        }
                        else
                        {
                            if (j > v[li])
                            {
                                v.pb(j);
                                s[j] = '?';
                                li++;
                                oi = 1;
                                f = 1;
                                break;
                            }
                            else
                            {
                                ui = j;
                                f=1;
                            }
                        }
                    }
                }
                if (f == 0)
                {
                    cout << "need tree\n";
                    return 0;
                }
                if (oi == -1)
                {
                    v.pb(ui);
                    s[ui] = '?';
                }
                
            }
            v2 = v;
            sort(v2.begin(), v2.end());
            if (v == v2)
            {
                cout << "automaton\n";
            }
            else
            {
                cout << "both\n";
            }
        }
    }
}
