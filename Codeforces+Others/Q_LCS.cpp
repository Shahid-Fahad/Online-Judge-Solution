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
string a,b;
ll as,bs;
ll dp[3005][3005];
ll dr[3005][3005];
ll f(ll i,ll j)
{
    if(i==as||j==bs)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    ll x=-1e18,y=-1e18,z=-1e18;
    if(a[i]==b[j])
    {
        x = f(i+1,j+1)+1;
    }
    else
    {
        y = f(i+1,j);
        z = f(i,j+1);
    }
    ll mn=max({x,y,z});
    if(mn==x)
    dr[i][j]=1;
    else if(mn==y)
    dr[i][j]=2;
    else if(mn==z)
    dr[i][j]=3;

    return dp[i][j]=mn;
}
void print(ll i,ll j)
{
    if(i==as||j==bs)
    return;
    if(dr[i][j]==1)
    {
        cout << a[i];
        print(i+1,j+1);
    }
    else if(dr[i][j]==2)
    print(i+1,j);
    else
    print(i,j+1);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin >> t;
    while(t--)
    {
        cin >> a >> b;
        as=a.size();
        bs=b.size();
        mem(dp,-1);
        f(0,0);
        print(0,0);
        cout << endl;
    } 
}
