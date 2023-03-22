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
ll dis(ll x1,ll y1,ll x2,ll y2)
{
    ld a = x1-x2;
    ld b = y1-y2;
    ld ans = sqrt((a*a)+(b*b));
    return ceil(ans);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin >> t;
    while(t--)
    {
        ll xa,ya,xb,yb;
        cin >> xa >> ya >> xb >> yb;
        vector<pair<ll,ll>>v;
        //v.pb({xa,ya});v.pb({xb,yb});v.pb({xa,yb});v.pb({xb,ya});
        ll xd = abs(xa-ya)-1;
        ll yd = abs(ya-yb)-1;
        for(ll i=1;i<=2;i++)
        {
            ll xn;
            if(i==1)
            xn=xa;
            else
            xn=xb;
            for(ll j=min(ya,yb);j<=max(ya,yb);j++)
            {
                v.pb({xn,j});
            }
        }
        for(ll i=1;i<=2;i++)
        {
            ll yn;
            if(i==1)
            yn=ya;
            else
            yn=yb;
            for(ll j=min(xa,xb)+1;j<=max(xa,xb)-1;j++)
            {
                v.pb({j,yn});
            }
        }
      
        ll q;
        cin >> q;
        ll bl=0;
        ll arr[v.size()+5]={0};
        while(q--)
        {
            ll a,b,c;
            cin >> a >>b>>c;
            for(ll i=0;i<v.size();i++)
            {
                ll d = dis(a,b,v[i].ff,v[i].ss);
                if(d<=c)
                {
                    arr[i]=1;
                }
            }
        }
        for(ll i=0;i<v.size();i++)
        {
            if(arr[i]==0)
            bl++;
        }
        cout << bl << endl;
    } 
}
