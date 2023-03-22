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

ll dx[] = {-1, 0, 1, 0};
ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
ll n,m;
vector<string>v;
ll vis[100][100];
bool isvalid(ll x,ll y,char c)
{
    char ch = v[x][y];
    if(x<0||y<0||x>n-1||y>v[x].size()-1)
    {
        return false;
    }
    if(ch==c||ch=='#'||vis[x][y]==1)
    {

        return false;
    }

    return true;
}
void dfs(ll x,ll y,char c)
{
    vis[x][y]=1;
    v[x][y]='#';
    for(ll i=0;i<4;i++)
    {
        if(isvalid(x+dx[i],y+dy[i],c))
        {

            dfs(x+dx[i],y+dy[i],c);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        n=-1;
        while(getline(cin,s))
        {
            if(s[0]=='_'&&s[1]=='_')
            break;
            v.pb(s);
            n++;
        }

        for(ll i=0;i<v.size();i++)
        {
            for(ll j=0;j<v[i].size();j++)
            {
                if(v[i][j]=='*')
                {
                    dfs(i,j,v[0][0]);
                }
            }
        }
        for(ll i=0;i<v.size();i++)
        cout << v[i] << endl;
        memset(vis,0,sizeof(vis));
        cout << s << endl;
        v.clear();
    }
}
