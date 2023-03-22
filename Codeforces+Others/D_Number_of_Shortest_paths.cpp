///Bismillahir Rahmanir Rahim
//ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define case_(tc) cout << "Case " << tc << ": ";
#define mem(a,b) memset(a,b,sizeof(a))
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()

#define pi acos(-1.0) 
#define tani(a) atan(a)/(pi/180)
#define sini(a) asin(a)/(pi/180)
#define cosi(a) cos(a)/(pi/180)
#define cos(a)  cos(a*pi/180)
#define sin(a)  sin(a*pi/180)
#define tan(a)  tan(a*pi/180)
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

//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};,
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
vector<ll>v[200005];
ll vis[200005];
ll dis[200005];
ll ways[200005];
void bfs(ll root)
{
    queue<ll>q;
    q.push(root);
    vis[root]=1;
    dis[root]=0;
    ways[root]=1;
    while(q.size()>0)
    {
        ll cur = q.front();
        q.pop();
        for(auto x:v[cur])
        {
            if(vis[x]==0)
            {
                vis[x]=1;
                q.push(x);
            }
            if(dis[x]>dis[cur]+1)
            {
                dis[x]=dis[cur]+1;
                ways[x]=ways[cur];
            }
            else if(dis[x]==dis[cur]+1)
            {
                ways[x]=modAdd(ways[x],ways[cur]);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n >> m;
        while(m--)
        {
            ll x,y;
            cin >>x  >>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        for(ll i=1;i<=n;i++)
        {
            vis[i]=0;
            dis[i]=1e16;
            ways[i]=0;
        }
        bfs(1);
        cout <<ways[n] << endl;
    } 
}
