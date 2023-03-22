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
inline ll modadd(ll a,ll b){return ((a%mod)+(b%mod))%mod;}

//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};,
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};

///Recursive DP

/*ll n,sm;
ll  arr[105];
ll  dp[1000005];
ll f(ll s)
{
    if(s==0)
    return 1;

    if(dp[s]!=-1)
    return dp[s];
    ll a=0;
    for(ll i=0;i<n;i++)
    {
        if(s-arr[i]<0)
        break;
        a = modadd(a,f(s-arr[i]));
    }
    return dp[s]=a;
}*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin >> t;
    while(t--)
    {
       ll n,sm;
        cin >> n >> sm;
        ll arr[n+5];
        ll dp[sm+5];
        // mem(dp,-1);
        for(ll i=0;i<n;i++)
        cin >> arr[i];
        //iterative Dp
        sort(arr,arr+n);
        dp[0]=1;
        for(ll i=1;i<=sm;i++)
        {
            ll a=0;
            for(ll j=0;j<n;j++)
            {
                if(i-arr[j]<0)
                break;
                else
                a=modadd(a,dp[i-arr[j]]);
            }
            dp[i]=a;
        }
        cout << dp[sm]  << endl;
        
    } 
}
