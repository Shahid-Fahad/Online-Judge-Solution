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
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return ((a * b) / gcd(a, b));
}

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

inline ll MOD(ll a)
{
    return (a % mod + mod) % mod;
}
inline ll modAdd(ll a, ll b)
{
    return MOD(MOD(a) + MOD(b));
}
inline ll modSub(ll a, ll b)
{
    return MOD(MOD(a) - MOD(b));
}
inline ll modMul(ll a, ll b)
{
    return MOD(MOD(a) * MOD(b));
}
inline ll modInv(ll a)
{
    return bigMod(a, mod - 2);
}
//inline ll exp(ll b, ll p,ll m) {ll r=1;while(p) {if(p&1)r=(__int128)r*b%m;b=(__int128)b*b%m;p/=2;}return r;}
bitset<8> toBinary(ll n)
{
    return bitset<8>(n);
}
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

ll dx[] = {-1, 0, 1, 0};
ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
ll n, m;
char arr[1005][1005];
ll vis[1005][1005];
ll dis[1005][1005];
ll dis2[1005][1005];
string dr = "URDL";
char par[1005][1005];
pair<ll,ll> parn[1005][1005];
bool isvalid(ll x, ll y)
{
    if (x < 0 || y < 0 || x > n - 1 || y > m - 1 || arr[x][y] == '#' || vis[x][y] == 1||arr[x][y]=='M')
        return false;
    return true;
}
pair<ll,ll>ans;
void bfs(vector<pair<ll, ll>> v)
{
    queue<pair<ll, ll>> q;
    for (auto it : v)
    {
        vis[it.ff][it.ss] = 1;
        q.push(it);
    }

    while (q.size() > 0)
    {
        ll curx = q.front().ff;
        ll cury = q.front().ss;
        q.pop();
        for (ll i = 0; i < 4; i++)
        {
            ll X = dx[i] + curx;
            ll Y = dy[i] + cury;
            if (isvalid(X, Y))
            {
                vis[X][Y]=1;
                q.push({X, Y});
                dis[X][Y] = dis[curx][cury] + 1;
            }
        }
    }
}
bool escape(ll x, ll y)
{
    queue<pair<ll, ll>> q;
    vis[x][y] = 1;
    q.push({x,y});
    while(q.size()>0)
    {
        ll curx = q.front().ff;
        ll cury = q.front().ss;
        q.pop();
        for (ll i = 0; i < 4; i++)
        {
            ll X = dx[i] + curx;
            ll Y = dy[i] + cury;
            if (isvalid(X, Y))
            {
                vis[X][Y]=1;
                q.push({X, Y});
                dis2[X][Y] = dis2[curx][cury] + 1;
                par[X][Y]=dr[i];
                parn[X][Y]={curx,cury};
                if(X==0||Y==0||X==n-1||Y==m-1)
                {
                    if(dis2[X][Y]<dis[X][Y]||dis[X][Y]==0)
                    {
                        ans = {X,Y};
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<pair<ll, ll>> v;
        pair<ll, ll> pr;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'M')
                    v.pb({i, j});
                else if (arr[i][j] == 'A')
                {
                    pr = {i, j};
                }
            }
        }
        if(pr.ff==0||pr.ss==0||pr.ff==n-1||pr.ss==m-1)
        {
            YES;
            cout << 0 << endl;
            return 0;
        }
        bfs(v);
        mem(vis, 0);
        if(escape(pr.ff,pr.ss))
        {
            YES;
            string s;
            while(ans!=pr)
            {
                s.pb(par[ans.ff][ans.ss]);
                ans = parn[ans.ff][ans.ss];
            }
            cout << s.size() << endl;
            reverse(all(s));
            cout << s << endl;
        }
        else
        {
            NO;
        }
       

    }
}
