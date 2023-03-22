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
vector<ll>v[25];
ll vis[25];
ll dis[25];
void bfs(ll s)
{
    queue<ll>q;
    q.push(s);
    vis[s]=1;
    while(q.size()>0)
    {
        ll n=q.front();
        q.pop();
        for(ll i=0;i<v[n].size();i++)
        {
            ll child=v[n][i];
            if(vis[child]==0)
            {
                vis[child]=1;
                dis[child]=dis[n]+1;
                q.push(child);
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
    ll x;
    ll tc=0;
    while(cin >>x)
    {
        tc++;
        
        cout << "Test Set #" << tc << endl;
        while(x--)
        {
            ll k;
            cin >> k;
            v[1].pb(k);
            v[k].pb(1);
        }
        for(ll i=2;i<=19;i++)
        {
            ll q;
            cin >> q;
            while(q--)
            {
                ll k;
                cin >> k;
                v[i].pb(k);
                v[k].pb(i);
            }
        }
        ll q;
        cin >> q;
        while(q--)
        {
            ll s,d;
            cin >> s >> d;
            memset(vis,0,sizeof(vis));
            memset(dis,0,sizeof(dis));
            bfs(s);
            if(s<10)
            cout << " ";
            cout << s << " to ";
            if(d<10)
            cout << " ";
            cout << d << ": " << dis[d] << endl;
        }
        for(ll i=1;i<=20;i++)
            v[i].clear();
        cout << endl;
    }

}
