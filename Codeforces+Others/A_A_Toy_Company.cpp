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
bitset<8> toBinary(ll n) {return bitset<8>(n);}

//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
vector<string>v;
ll vis[27][27][27];
ll dis[27][27][27];
bool isvalid(string x)
{
    if(vis[x[0]-'a'][x[1]-'a'][x[2]-'a']==1)
    return false;
    return true;
}
void bfs(string x)
{
    queue<string>q;
    q.push(x);
    vis[x[0]-'a'][x[1]-'a'][x[2]-'a']=1;
    dis[x[0]-'a'][x[1]-'a'][x[2]-'a']=0;
    while(q.size()>0)
    {
        string cur = q.front();
        q.pop();
        for(ll i=0;i<3;i++)
        {
            string tmp=cur;
            if(tmp[i]=='z')
                tmp[i]='a';
            else
            tmp[i]++;
            if(isvalid(tmp))
            {
                q.push(tmp);
                vis[tmp[0]-'a'][tmp[1]-'a'][tmp[2]-'a']=1;
                dis[tmp[0]-'a'][tmp[1]-'a'][tmp[2]-'a']=dis[cur[0]-'a'][cur[1]-'a'][cur[2]-'a']+1;
            }
        }
        for(ll i=0;i<3;i++)
        {
            string tmp=cur;
            if(tmp[i]=='a')
                tmp[i]='z';
            else
            tmp[i]--;
            if(isvalid(tmp))
            {
                q.push(tmp);
                vis[tmp[0]-'a'][tmp[1]-'a'][tmp[2]-'a']=1;
                dis[tmp[0]-'a'][tmp[1]-'a'][tmp[2]-'a']=dis[cur[0]-'a'][cur[1]-'a'][cur[2]-'a']+1;
            }
        }

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    ll tc=0;
    while(t--)
    {
        tc++;
        case_(tc);
        string st,dst;
        cin >> st >> dst;
        ll m;
        cin >> m;

        v.clear();
        mem(dis,-1);
        mem(vis,0);

            ll f=0;
        while(m--)
        {
            string x,y,z;
            cin >> x >> y >> z;
            for(ll i=0;i<x.size();i++)
            {
                for(ll j=0;j<y.size();j++)
                {
                    for(ll k=0;k<z.size();k++)
                    {
                       string tmp;
                       tmp.pb(x[i]);
                       tmp.pb(y[j]);
                        tmp.pb(z[k]);
                        if(tmp==dst||tmp==st)
                        {
                            f=1;
                            break;
                        }
                       vis[x[i]-'a'][y[j]-'a'][z[k]-'a']==1;
                    }
                    if(f)
                    break;
                }
                if(f)
                    break;
            }
        }
        if(f)
        {
            cout << -1 << endl;
            continue;
        }
        bfs(st);
        cout << dis[dst[0]-'a'][dst[1]-'a'][dst[2]-'a'] << endl;

    }
}
