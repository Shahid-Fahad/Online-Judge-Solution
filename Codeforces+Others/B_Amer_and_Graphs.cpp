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
inline ll fixmod(ll a,ll b){return (a%b + b)%b;}
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
#define pll pair<ll, ll>
const pll M = make_pair(1910270027, 1910270927); ///Should be large primes
const int base = 191027;                         ///Should be a prime larger than highest value
const int N = 3000;                           ///Highest length of string
pll pb[N];                                       ///powers of base mod M
pll invb;
pll operator+(pll a, ll x) { return make_pair(a.ff + x, a.ss + x); }
pll operator-(pll a, ll x) { return make_pair(a.ff - x, a.ss - x); }
pll operator*(pll a, ll x) { return make_pair(a.ff * x, a.ss * x); }
pll operator+(pll a, pll x) { return make_pair(a.ff + x.ff, a.ss + x.ss); }
pll operator-(pll a, pll x) { return make_pair(a.ff - x.ff, a.ss - x.ss); }
pll operator*(pll a, pll x) { return make_pair(a.ff * x.ff, a.ss * x.ss); }
pll operator%(pll a, pll m) { return make_pair(a.ff % m.ff, a.ss % m.ss); }
ostream &operator<<(ostream &os, pll hash)
{
    return os << "(" << hash.ff << ", " << hash.ss << ")";
}
pll power(pll a, ll p)
{
    if (p == 0)
        return make_pair(1, 1);
    pll ans = power(a, p / 2);
    ans = (ans * ans) % M;
    if (p % 2)
        ans = (ans * a) % M;
    return ans;
}
pll inverse(pll a)
{
    return power(a, (M.ff - 1) * (M.ss - 1) - 1);
}
void hashPre()
{
    pb[0] = make_pair(1, 1);
    for (int i = 1; i < N; i++)
        pb[i] = (pb[i - 1] * base) % M;
    invb = inverse(pb[1]);
}
struct Hash {
	ll val1 = 0, val2 = 0;
	ll base1 = 1827017, base2 = 5195977;
	ll mod1 = 100888001, mod2 = 133767331;
	void push(int num) {
		val1 *= base1; val1 += num; val1 %= mod1;
		val2 *= base2; val2 += num; val2 %= mod2;
	}
    void push2(int num)
    {
        if(val1==0)
        val1++;
        if(val2==0)
        val2++;
        val1 *= pb[num].ff ; val1 %=mod1;
        val2 *= pb[num].ss ; val2 %=mod2;
    }
	bool operator < (const Hash& p) const {
		if(val1 == p.val1) return val2 < p.val2;
		return val1 < p.val1;
	}
	bool operator == (const Hash &p) const {
		return val1 == p.val1 && val2 == p.val2;
	}
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1,tc=0;
    cin >> t;
    while(t--)
    {
        //tc++;case_(tc);
        ll n;
        cin>>n;
        hashPre();
        map<pair<ll,ll>,ll>mp;
        ll lvl=0;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            if(x>y)
            swap(x,y);
            if(mp.find({x,y})==mp.end())
            mp[{x,y}]=++lvl;
            v.pb(mp[{x,y}]);
        }
        map<Hash,ll>hmp;
        int ans=0;
        for(ll i=0;i<v.size();i++)
        {
            Hash h;
            for(ll j=i;j<v.size();j++)
            {
                h.push2(v[j]);
                hmp[h]++;
            }
        }
        for(auto it:hmp)
        {
           ans+= (it.ss*(it.ss-1))/2;
        }
        cout<<ans<<endl;

    } 
}
