///Bismillahir Rahmanir Rahim
//ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define case_(tc) cout << "Case " << tc << ": ";
#define mem(a,b) memset(a,b,sizeof(a))
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
const ll mod=1e9+7;

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define dbg cout << "EKHANE" << endl;

ll Pow(ll c,ll d){return d==0? 1:c*pow(c,d-1);}
ll gcd(ll a,ll b) {return b==0? a:gcd(b,a%b);}
ll lcm(ll a,ll b) {return ((a*b)/gcd(a,b));}

ll egcd(ll a,ll b,ll &x,ll &y){if(b==0){x=1;y=0;return a;}ll x1,y1;ll gcd=egcd(b,a%b,x1,y1);x=y1;y=x1-y1*(a/b);return gcd;}
ll bigMod(ll a,ll b){a%=mod;ll res=1;while(b>0){if(b&1)res=(res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}

inline ll MOD(ll a){ return (a%mod + mod) %mod ; }
inline ll modAdd(ll a,ll b){ return MOD( MOD(a) + MOD(b) ) ; }
inline ll modSub(ll a,ll b){ return MOD( MOD(a) - MOD(b) ) ; }
inline ll modMul(ll a,ll b){ return MOD( MOD(a) * MOD(b) ) ; }
inline ll modInv(ll a){ return bigMod(a,mod-2) ; }
//inline ll exp(ll b, ll p,ll m) {ll r=1;while(p) {if(p&1)r=(__int128)r*b%m;b=(__int128)b*b%m;p/=2;}return r;}
bitset<8> toBinary(ll n) {return bitset<8>(n);}
ll cXOR(ll n){if (n % 4 == 0)return n;if (n % 4 == 1) return 1;if (n % 4 == 2) return n + 1;return 0;}

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
ll dx[] = {-1, 0, 1, 0};
ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
ll n,m;
char arr[1001][1001];
ll vis[1001][1001];
ll dis[1001][1001];
ll par[1001][1001];
string sd = "URDL";
bool isvalid(ll x,ll y)
{
    if(x<1||y<1||x>n||y>m||vis[x][y]==1||arr[x][y]=='#')
    return false;
    return true;
} 
void bfs(ll x,ll y)
{
    queue<pair<ll,ll>>q;
    q.push({x,y});
    vis[x][y]=1;
    par[x][y]=-1;
    while(q.size()>0)
    {
        ll curx=q.front().ff;
        ll cury=q.front().ss;
        q.pop();
        for(ll i=0;i<4;i++)
        {
            ll X = curx+dx[i];
            ll Y = cury+dy[i];
            if(isvalid(X,Y))
            {
                vis[X][Y]=1;
                dis[X][Y]=dis[curx][cury]+1;
                par[X][Y]=i;
                q.push({X,Y});
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1,tc=0;
    //cin >> t;
    while(t--)
    {
        //tc++;case_(tc);
        cin >> n >> m;
        pair<ll,ll>p,q;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                cin >> arr[i][j];
                if(arr[i][j]=='A')
                {
                    p = {i,j};
                }
                else if(arr[i][j]=='B')
                {
                    q = {i,j};
                }
            }
        }
        bfs(p.ff,p.ss);
        if(vis[q.ff][q.ss]==1)
        {
            YES;
            cout << dis[q.ff][q.ss] << endl;
            string ans;
            ll x = q.ff, y = q.ss;
            while(par[x][y]!=-1)
            {
                ans.pb(sd[par[x][y]]);
                ll tm=x;
                x-=dx[par[x][y]];
                y-=dy[par[tm][y]];
            }
            reverse(all(ans));
            cout << ans << endl;
        }
        else
        {
            NO;
        }

    } 
}
