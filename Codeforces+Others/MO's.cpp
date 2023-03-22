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
//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
ll lim;
struct S
{
    ll l,r,i;
};
bool operator<(S const&a,S const&b)
{
    if(a.l/lim==b.l/lim)
    {
        if((a.l/lim)%2==1)
        return a.r>b.r;
        else
        return a.r<b.r;
    }
    else
    return (a.l/lim)<(b.l/lim);
}
vector<ll>v;
ll freq[1000005];
ll moo=0;
void add(ll in)
{

    freq[v[in]]++;
    if(freq[v[in]]==1)
    moo++;

}
void err(ll in)
{

    freq[v[in]]--;
    if(freq[v[in]]==0)
    moo--;
}
int main()
{
   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    ll t=1,tc=0;
    //cin >> t;
    while(t--)
    {
        //tc++;case_(tc);
        ll n;
        cin>>n;
        lim = (sqrt(n))+1;
        vector<S>v2;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.pb(x);
        }
        ll q;
        cin>>q;
        for(ll i=0;i<q;i++)
        {
            ll l,r;
            cin>>l>>r;
            l--,r--;
            v2.pb({l,r,i});
        }
        sort(all(v2));
        ll ans[q+5];
        ll l=0,r=-1;
        for(ll i=0;i<q;i++)
        {
            while(v2[i].l<l)add(--l);
            while(v2[i].l>l)err(l++);
            while(v2[i].r>r)add(++r);
            while(v2[i].r<r)err(r--);

            ans[v2[i].i]=moo;
        }
        for(ll i=0;i<q;i++)
        {
            cout << ans[i]<<endl;
        }



    }
}
