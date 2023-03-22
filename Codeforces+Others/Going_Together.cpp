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
bitset<8> toBinary(ll n)
{
    return bitset<8>(n);
}

ll dx[] = {-1, 0, 1, 0};
ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
ll n;
struct node
{
    ll x[3], y[3];
    ll cost;
} in, prv, cur;
char arr[15][15];
ll vis[11][11][11][11][11][11];
bool chd()
{
    for (ll i = 0; i < 3; i++)
    {
        if (arr[prv.x[i]][prv.y[i]] != 'X')
            return false;
    }
    return true;
}
void go()
{
    for (ll i = 0; i < 3; i++)
    {
        if (cur.x[i] < 0 || cur.x[i] > n - 1 || cur.y[i] < 0 || cur.y[i] > n - 1 || arr[cur.x[i]][cur.y[i]]=='#')
        {
            cur.x[i] = prv.x[i];
            cur.y[i] = prv.y[i];
        }
    }
    for (ll k = 0; k < 3; k++)
    {
        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                if(i==j)
                continue;
                if (cur.x[i] == cur.x[j] && cur.y[i] == cur.y[j])
                {
                    cur.x[j] = prv.x[j];
                    cur.y[j] = prv.y[j];
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    ll tc=0;
    cin >> t;
    while (t--)
    {
        tc++;
        mem(vis,0);
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'A')
                {
                    in.x[0] = i;
                    in.y[0] = j;
                }
                else if (arr[i][j] == 'B')
                {
                    in.x[1] = i;
                    in.y[1] = j;
                }
                else if (arr[i][j] == 'C')
                {
                    in.x[2] = i;
                    in.y[2] = j;
                }
            }
        }
        in.cost = 0;
        queue<node> q;
        q.push(in);
        ll ans = -1;
        while (q.size() > 0)
        {
            prv = q.front();
            q.pop();
            if (chd())
            {
                ans = prv.cost;
                break;
            }
            for (ll i = 0; i < 4; i++)
            {
                for (ll j = 0; j < 3; j++)
                {
                    cur.x[j] = prv.x[j] + dx[i];
                    cur.y[j] = prv.y[j] + dy[i];
                }
            
            go();
            if(vis[cur.x[0]][cur.y[0]][cur.x[1]][cur.y[1]][cur.x[2]][cur.y[2]]==0)
            {
                vis[cur.x[0]][cur.y[0]][cur.x[1]][cur.y[1]][cur.x[2]][cur.y[2]]=1;
                cur.cost = prv.cost+1;
                q.push(cur);
            }
        }
        }
        case_(tc);
        if(ans==-1)
        {
            cout << "trapped\n";
        }
        else
        {
            cout << ans << endl;
        }
    }
}
