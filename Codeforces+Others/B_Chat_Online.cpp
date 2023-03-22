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
    //cin >> t;
    while(t--)
    {
        ll p,q,l,r;
        vector<pair<ll,ll>>v1,v2;
        cin >> p >> q >> l >> r;
        for(ll i=0;i<p;i++)
        {
            ll x,y;
            cin >> x >> y;
            v1.pb({x,y});
        }
        for(ll i=0;i<q;i++)
        {
            ll x,y;
            cin >> x >> y;
            v2.pb({x,y});
        }
        ll mx=0;
        for(ll i=l;i<=r;i++)
        {
            ll sum=0;
            for(ll j=0;j<v2.size();j++)
            {
                ll st1 = v2[j].ff+i;
                ll en1 = v2[j].ss+i;
                for(ll k=0;k<v1.size();k++)
                {
                   ll st2 = v1[k].ff;
                   ll en2 = v1[k].ss;
                   if(st1<=st2&&st2<=en1)
                    {
                        if(en2>=en1)
                        sum+=en1-st2+1;
                        else
                        sum+=en1-en2+1;
                    }
                    else if(st2<=st1&&st1<=en2)
                    {
                        if(en1>=en2)
                        sum+=en2-st1+1;
                        else
                        sum+=en2-en1+1;
                    }
                   
                }
            }
            if(sum>0)
            mx++;
           
        }
        cout << mx << endl;
    } 
}
