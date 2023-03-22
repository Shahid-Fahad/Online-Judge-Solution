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
bool isvalid(string a,string b)
{
    ll c=0;
    for(ll i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
            c++;
    }
    if(c==1)
        return true;
    else
        return false;
}
vector<string>v[15];
map<string,ll>vis;
map<string,ll>dis;
void bfs(string s)
{
    queue<string>q;
    q.push(s);
    vis[s]=1;
    dis[s]=0;
    while(q.size()>0)
    {
        string cur = q.front();
        q.pop();
        ll n = cur.size();
        for(ll i=0;i<v[n].size();i++)
        {
            string child = v[n][i];
            if(vis[child]==0&&isvalid(cur,child))
            {

                vis[child]=1;
                dis[child]=dis[cur]+1;
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
    cin >> t;
    while(t--)
    {
        string s;
        for(ll i=0;i<15;i++)
        {
            v[i].clear();
        }
        while(cin >> s)
        {
            if(s=="*")
            break;;
            ll sz = s.size();
            v[sz].pb(s);
        }
        cin.ignore();
        while(1)
        {
            getline(cin,s);
            if(s.empty())
            break;
            string sr,d,t;
            for(ll i=0;i<s.size();i++)
            {
                if(s[i]==' ')
                {
                    sr=t;
                    t.clear();
                }
                else
                t.pb(s[i]);
            }
            d=t;
            bfs(sr);

            cout << sr << " " << d << " " << dis[d] << endl;
            vis.clear();
            dis.clear();

        }
        if(t>=1)
        cout << endl;
    }
}
