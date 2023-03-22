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
ll par[505];
ld dis(ld x1,ld y1,ld x2,ld y2)
{
    ld a = x2-x1;
    ld b = y2-y1;
    return sqrt(abs((a*a)+(b*b)));
}
ll find(ll n)
{
    if(par[n]==n)
    return n;
    else
    return par[n]=find(par[n]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n >>m;
        vector<pair<ld,ld>>v;
        for(ll i=0;i<m;i++)
        {
            ld x,y;
            cin >> x >> y;
            v.pb({x,y});
        } 
        vector<pair<ld,pair<ld,ld>>>vd;
        for(ll i=0;i<v.size();i++)
        {
            for(ll j=i+1;j<v.size();j++)
            {
               ld x1=v[i].ff,y1=v[i].ss;
               ld x2=v[j].ff,y2=v[j].ss;
               ld z = dis(x1,y1,x2,y2);

                vd.pb({z,{i+1,j+1}});
            }
        }
        sort(vd.begin(),vd.end());
      
        for(ll i=1;i<=m;i++)
        par[i]=i;

        ld mx=-1.0;
        vector<pair<ld,pair<ll,ll>>>ans;
        ll cnt=m-n;
        for(ll i=0;i<vd.size();i++)
        {
            ll a = vd[i].ss.ff;
            ll b = vd[i].ss.ss;
            ll Pa = find(a);
            ll Pb = find(b);
            if(Pa!=Pb)
            {
                par[Pb]=Pa;
                cnt--;
                if(cnt==0)
                {
                    cout << setprecision(2) << fixed << vd[i].ff<< endl;
    
                    break;
                }
                ans.pb({vd[i].ff,{a,b}});
            }
        }
       

    } 
}
