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
    //cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, vector<ll>> v;
        for (ll i = 0; i < s.size(); i++)
            v[s[i]].pb(i);
        string x = "iadukohc";
        
        for (auto it : v)
        {
            ll k = it.ff;
            reverse(v[k].begin(), v[k].end());
        }
        ll dp[s.size() + 5];
        memset(dp, 0, sizeof(dp));
        for (ll i = 0; i < 8; i++)
        {
            ll prev = -1;
            auto v2 = v[x[i]];
            for (auto it : v2)
            {
               
                if (i == 0)
                {
                    if (prev == -1)
                    {
                        dp[it] = 1;
                        prev = it;
                    }
                    else
                    {
                        dp[it] = modAdd(1, dp[prev]);
                        prev = it;
                    }
                }
                else
                {
                    auto v3 = v[x[i - 1]];
                    reverse(v3.begin(), v3.end());
                    ll in = upper_bound(v3.begin(), v3.end(), it) - v3.begin();
                    if (in < v3.size())
                    {
                        if (prev == -1)
                        {
                            dp[it] = dp[v3[in]];
                            
                        }
                        else
                        {
                            dp[it] = modAdd(dp[prev], dp[v3[in]]);
                           
                        }
                        prev=it;
                    }
                    else
                    {
                        if(prev==-1)
                        dp[it]=0;
                        else
                        dp[it]=dp[prev];
                        prev=it;
                    }
                }
            }
        }
        cout << dp[v['c'].back()] << endl;
    }
}
