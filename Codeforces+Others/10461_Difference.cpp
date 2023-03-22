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
#define PI (acos(-1.0))
#define torad(x) ((x) * ((2*acos(0))/180.0))
#define todeg(x) ((x) * (180.0/(2*acos(0))))
#define fixAngle(x) ( (x) > 1 ? 1 : (x) < -1 ? -1 : (x))

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
//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
ll n,m;
vector<ll>v1[505],v2[505];
ll vis[505];
ll a=0,b=0;
vector<ll>cm;
void dfs1(ll n)
{
    vis[n]=1;
    for(ll i=0;i<v1[n].size();i++)
    {
        ll child = v1[n][i];
        if(vis[child]==0)
        {
            dfs1(child);
            a+=cm[child-1];
        }
    }
}
void dfs2(ll n)
{
    vis[n]=1;
    for(ll i=0;i<v2[n].size();i++)
    {
        ll child = v2[n][i];
        if(vis[child]==0)
        {
            dfs2(child);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1,tc=0;
    //cin >> t;
    while(cin >> n >> m)
    {
        //tc++;case_(tc);
        tc++;
        if(n==0&&m==0)
        {
            break;
        }
       
        cout << "Case #" << tc << ":\n";
        cm.clear();
        for(ll i=1;i<=n;i++)
        {
            v1[i].clear();
            v2[i].clear();
            vis[i]=0;
        }
        for(ll i=0;i<n;i++)
        {
            ll x;cin >>x;
            cm.pb(x);
        }
        while(m--)
        {
            ll x,y;
            cin >> x >> y;
            v1[y].pb(x);
            v2[x].pb(y);
        }
        ll q;
        cin >> q;
        while(q--)
        {
            mem(vis,0);
            a=0,b=0;
            ll x;
            cin >> x;
            dfs1(x);
            dfs2(x);
            for(ll i=1;i<=n;i++)
            {
                if(vis[i]==0)
                {
                    b+=cm[i-1];
                }
            }
            cout << b <<endl;

        }
        cout << endl;


    } 
}
