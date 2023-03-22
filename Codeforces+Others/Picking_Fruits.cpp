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
ll n;
char arr[25][25];
ll dis[25][25];
struct pf
{
    ll x,y,a,b;
};
pair<ll,ll>p;
bool isvalid(ll x,ll y)
{
    if(x<1||y<1||x>n||y>n||arr[x][y]=='#')
    return false;
    return true;
}
void bfs(ll x,ll y,ll a,ll b)
{
    queue<pf>q;
    q.push({x,y,a,b});
    dis[x][y]=0;
    while(q.size()>0)
    {
        ll cx = q.front().x;
        ll cy = q.front().y;
        ll ca = q.front().a;
        ll cb = q.front().b;
        q.pop();
        for(ll i=0;i<4;i++)
        {
            ll X = cx+dx[i];
            ll Y = cy+dy[i];
            if(isvalid(X,Y))
            {
                ll k = dis[cx][cy]+1;
                if(arr[X][Y]=='D')
                {
                    if(k<dis[X][Y])
                    {
                        dis[X][Y]=k;
                        p = {ca,cb};
                    q.push({X,Y,ca,cb});
                    }
                    else if(k==dis[X][Y])
                    {
                        if((ca>p.ff)||(ca==p.ff&&cb>p.ss))
                        {
                            dis[X][Y]=k;
                            p = {ca,cb};
                            q.push({X,Y,ca,cb});
                        }
                    }
                }
                if(arr[X][Y]=='A')
                {
                    dis[X][Y]=k;
                    q.push({X,Y,ca+1,cb});
                }
                if(arr[X][Y]=='B')
                {
                    dis[X][Y]=k;
                    q.push({X,Y,ca,cb+1});
                }
                if(arr[X][Y]=='.')
                {
                    dis[X][Y]=k;
                    q.push({X,Y,ca,cb});
                }
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
    while(cin >> n)
    {
        //tc++;case_(tc);
        if(n==0)
        break;
        p={0,0};
        ll x,y;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                cin >> arr[i][j];
                dis[i][j]=1e18;
                if(arr[i][j]=='S')
                {
                    x=i,y=j;
                }
            }
        }
        bfs(x,y,0,0);
        cout <<  dis[x][y] << " " << p.ff <<" " << p.ss << endl;

    } 
}
