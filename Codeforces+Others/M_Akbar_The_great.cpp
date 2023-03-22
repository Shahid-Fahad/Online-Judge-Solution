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

ll Pow(ll c,ll d)
{
    return d==0? 1:c*pow(c,d-1);
}
ll gcd(ll a,ll b)
{
    return b==0? a:gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return ((a*b)/gcd(a,b));
}

ll egcd(ll a,ll b,ll &x,ll &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    ll x1,y1;
    ll gcd=egcd(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return gcd;
}
ll bigMod(ll a,ll b)
{
    a%=mod;
    ll res=1;
    while(b>0)
    {
        if(b&1)res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}

inline ll MOD(ll a)
{
    return (a%mod + mod) %mod ;
}
inline ll modAdd(ll a,ll b)
{
    return MOD( MOD(a) + MOD(b) ) ;
}
inline ll modSub(ll a,ll b)
{
    return MOD( MOD(a) - MOD(b) ) ;
}
inline ll modMul(ll a,ll b)
{
    return MOD( MOD(a) * MOD(b) ) ;
}
inline ll modInv(ll a)
{
    return bigMod(a,mod-2) ;
}

//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};,
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
vector<ll>v[1000005];
pair<pair<ll,ll>,ll> vis[1000005];
ll vis2[1000005];
void bfs(vp nd)
{
    queue<pair<ll,ll>>node;
    for(ll i=0;i<nd.size();i++)
    {
        node.push({nd[i].ff,nd[i].ss});
        vis[nd[i].ff]={{nd[i].ff,nd[i].ff},1};
    }
    ll sn=node.size();
    while(node.size()>0)
    {
        ll n = node.front().ff;
        vis2[n]++;
        ll p = node.front().ss;
        node.pop();
        if(p<=0)
        continue;
        for(ll i=0;i<v[n].size();i++)
        {
            ll child = v[n][i];
            if(vis[child].ss==0)
            {
               vis[child]={child,1};
               node.push({child,p-1});
            }
        }
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,r,m;
        cin >> n >> r >> m;
        for(ll i=1; i<=n; i++)
        {
            v[i].clear();
            vis[i]={i,0};
            vis2[i]=0;
        }
        for(ll i=0; i<r; i++)
        {
            ll x,y;
            cin >> x >> y;
            v[x].pb(y);
            v[y].pb(x);
        }
        vp nd;
        while(m--)
        {
            ll a,b;
            cin >> a >> b;
            nd.pb({a,b});
        }
        bfs(nd);
        for(ll i=1;i<=n;i++)
        {
            cout << vis2[i] << " ";
        }
        cout << endl;
        
    }

}