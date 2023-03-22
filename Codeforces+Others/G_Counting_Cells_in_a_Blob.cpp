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
#define case (tc) cout << "Case " << tc << ": ";
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
ll dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
ll dy[] = {1, 0, -1, 1, -1, 1, 0, -1};
char arr[30][30];
ll vis[30][30];
ll n,m;
bool isvalid(ll i, ll j)
{
    if (i < 0 || j < 0 || j > m - 1 || i > n - 1)
        return false;
    if (vis[i][j] == 1 || arr[i][j] == '0')
        return false;
    return true;
}
ll c = 0;
void dfs(ll x, ll y)
{
    vis[x][y] = 1;
    c++;
    for (ll i = 0; i < 8; i++)
    {
        if (isvalid(x + dx[i], y + dy[i]))
            dfs(x + dx[i], y + dy[i]);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    string d;
    cin >> t;
    //getchar();
    cin.ignore();
    getline(cin,d);
    while (t--)
    {
        string s;
        ll i = 0;
         m=0,n=0;
        memset(vis, 0, sizeof(vis));
        while (getline(cin, s))
        {
            if (s.empty())
                break;
            else
            {
                n++;
                for (ll j = 0; j < s.size(); j++)
                {
                    m = s.size();
                    arr[i][j] = s[j];
                }
                i++;
            }
        }
        ll min = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                   
                if (vis[i][j] == 0 && arr[i][j] == '1')
                {
                    c = 0;
                    //cout << "com " << i << "  " << j << endl;
                    dfs(i, j);
                    min = max(min, c);
                   // cout <<  min << endl;
                }
            }
            
        }
        cout << min;
        if (t == 0)
        {
            cout << endl;
        }
        else
        {
            cout << endl
                 << endl;
        }
    }
}
