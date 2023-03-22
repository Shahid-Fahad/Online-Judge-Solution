///Bismillahir Rahmanir Rahim
//ShzFahad
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
#define debug(x) cout << "TEST1 " << x << endl;
const ll mod=1e9+7;
template<typename T>
ll sz(T qz){ ll k = qz.size();return k;}
#define PI (acos(-1.0))
#define torad(x) ((x) * ((2*acos(0))/180.0))
#define todeg(x) ((x) * (180.0/(2*acos(0))))
#define fixAngle(x) ( (x) > 1 ? 1 : (x) < -1 ? -1 : (x))

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
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
inline ll ttp(ll a){return (1LL<<a); }
//inline ll exp(ll b, ll p,ll m) {ll r=1;while(p) {if(p&1)r=(__int128)r*b%m;b=(__int128)b*b%m;p/=2;}return r;}
bitset<8> toBinary(ll n) {return bitset<8>(n);}
ll cXOR(ll n){if (n % 4 == 0)return n;if (n % 4 == 1) return 1;if (n % 4 == 2) return n + 1;return 0;}

template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T, typename R> using omap = tree<T, R, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define endl '\n'
//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
vector<ll>prime;
bool mark[200005];
void sieve(ll n)
{
    ll i,j;
    prime.clear();
    mark[0]=true;
    mark[1]=true;
    mark[2]=false;
    prime.push_back(2);
    for(i=4; i<=n; i+=2)
        mark[i]=true;
    for(i=3; i<=n; i=i+2)
    {
        if(mark[i]==false)
        {
            prime.push_back(i);
            for(j=i*i; j<=n; j=j+i)
                mark[j]=true;
        }
    }

}
ll arr[200005],ok[200005];
map<ll,ll>mp,mp2;
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll t=1,tc=0;
    //cin >> t;
    while(t--)
    {
        //tc++;case_(tc);
        sieve(200003);
        ll n,q;
        cin>>n>>q;
        multiset<ll>st;
        for(ll i=1;i<=n;i++)
        {
            cin>>arr[i];
            mp2[arr[i]]++;
        }
        sort(arr+1,arr+n+1);
        for(ll i=0;i<prime.size();i++)
        {
            for(ll j=prime[i];j<=200005;j+=prime[i])
            {
                if(mp2.find(j)!=mp2.end()&&ok[j]==0)
                {
                    mp[prime[i]]+=mp2[j];
                    ok[j]=1;
                }
            }
        }
        while(q--)
        {
            ll x;
            cin>>x;
            ll ans=n;
            if(x==1)
            {
                cout << n << endl;
                continue;
            }
            for(ll i=0;i<prime.size();i++)
            {
                if(x%prime[i]==0)
                {
                    ans-=mp[prime[i]];
                }
            }
            cout << ans << endl;
        }
    }
}
