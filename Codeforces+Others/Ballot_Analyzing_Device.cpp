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
bool cmp(pair<ll,ld>a,pair<ll,ld>b)
{
    if(a.ss-b.ss>0.000001)
    return true;
    else if(b.ss-a.ss>0.000001)
    return false;
    else
    return a.ff<b.ff;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1,tc=0;
    //cin >> t;
    while(t--)
    {
        //tc++;case_(tc);
        ll n,m;
        cin >>n >> m;
        vector<string>v;
        for(ll i=0;i<n;i++)
        {
            string x;
            cin>>x;
            v.pb(x);
        }
      ll vote[n+5]={0};
       for(ll j=0;j<m;j++)
        {
            string x;
            cin>>x;
            ll f=0,ind;
            for(ll i=0;i<x.size();i++)
            {
                if(x[i]=='X')
                {
                    f++;
                    ind=i;
                }
            }
            if(f>=2||f==0)
            {
                vote[n]++;
            }
            else
            {
                vote[ind]++;
            }
        }
        vector<pair<ll,ld>>vp;
        for(ll i=0;i<n;i++)
        {
            ll x = vote[i];
            ld vt = (100.0*x)/(m+0.0);
            vp.pb({i,vt});
        }
        sort(all(vp),cmp);
        for(auto it:vp)
        {
            cout << v[it.ff] << " " << fixed <<setprecision(2) << it.ss << "%\n";
        }
        cout << "Invalid " << ((100.0*vote[n])/(m+0.0)) <<"%\n";
    } 
}
