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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while(t--)
    {
        ll k,n,m;
        cin >> k >> n >> m;
        ll a[n+5],b[m+5];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(ll i=0;i<m;i++)
        {
            cin >> b[i];
           
        }
       vector<ll>ans;
       ll f=0;
        vector<ll>v;
        ll ai=0,bi=0;
        a[n]=1e18,b[m]=1e18;
        for(ll i=0;i<(n+m);i++)
        {
            
           
            if(a[ai]==0)
            {
                k++;
                ans.pb(0);
                ai++;
            }
           else if(b[bi]==0)
            {
                k++;
                ans.pb(0);
                bi++;
            }
           else
           {
               if(a[ai]<=b[bi]&&a[ai]<=k)
               {
                   ans.pb(a[ai]);
                   ai++;
                   
               }
               else if(b[bi]<a[ai]&&b[bi]<=k)
               {
                   ans.pb(b[bi]);
                   bi++;
                   
               }
               else
               {
                   f=1;
                   break;
               }
           }
        }
        if(f==1)
        {
            cout << -1 << endl;
        }    
        else 
        {
            for(auto it:ans)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    } 
}
