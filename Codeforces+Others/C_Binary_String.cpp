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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1,tc=0;
    cin >> t;
    while(t--)
    {
        //tc++;case_(tc);
        string s;
        cin>>s;
        ll sz=s.size();
        pair<ll,ll> pr1[sz+5],pr2[sz+5];
        for(ll i=0;i<=sz;i++)
        pr1[i].ff=pr1[i].ss=pr2[i].ff=pr2[i].ss=0;
    
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            pr1[i].ff++;
            else
            pr1[i].ss++;
            if(i>0)
            {
                pr1[i].ff+=pr1[i-1].ff;
                pr1[i].ss+=pr1[i-1].ss;
            }
        }
        if(pr1[sz-1].ff==0||pr1[sz-1].ss==0)
        {
            cout <<0<<endl;
            continue;
        }
        for(ll i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0')
            pr2[i].ff++;
            else
            pr2[i].ss++;
            if(i<s.size()-1)
            {
                pr2[i].ff+=pr2[i+1].ff;
                pr2[i].ss+=pr2[i+1].ss;
            }
        }
        ll lim = pr1[sz-1].ff;
        ll x=lim-1,y=sz;
        ll zr=lim,on=pr1[sz-1].ss;
        ll ans=1e18;
        while(x>=-1)
        {
            ll zc=0,oc=0;
            if(x>=0)
            {
                zc+=pr1[x].ff;
                oc+=pr1[x].ss;
            }
            if(y<sz)
            {
                zc+=pr2[y].ff;
                oc+=pr2[y].ss;
            }
            ans=min(ans,max(zr-zc,oc));
            x--;y--;
        }
        cout<<ans<<endl;
    } 
}
