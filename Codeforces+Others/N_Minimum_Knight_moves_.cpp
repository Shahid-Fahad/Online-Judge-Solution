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
ll dx[]={-2,-2,2,2,1,-1,1,-1};
ll dy[]={1,-1,1,-1,-2,-2,2,2};
ll arr[9][9];
ll vis[9][9];
ll dis[9][9];
bool isvalid(ll x,ll y)
{
    if(x>8||y>8||x<1||y<1)
    return false;
    if(vis[x][y]==1)
    return false;
    return true;
}
void bfs(ll x, ll y)
{
    queue<pair<ll, ll>> q;
    q.push({x, y});
    vis[x][y] = 1;
    while (q.size() > 0)
    {
        ll curx = q.front().ff;
        ll cury = q.front().ss;
        q.pop();
        for (ll i = 0; i < 8; i++)
        {
           if(isvalid(curx+dx[i],cury+dy[i]))
            {
                ll X=curx+dx[i];
                ll Y=cury+dy[i];
                vis[X][Y]=1;
                dis[X][Y]=dis[curx][cury]+1;
                q.push({X,Y});
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        memset(vis, 0, sizeof(vis));
        memset(dis, 0, sizeof(dis));
        string a, b;
        cin >> a >> b;
        bfs(a[0]-'a'+1,a[1]-'0');
        cout << dis[b[0]-'a'+1][b[1]-'0'] << endl;
    }
}
