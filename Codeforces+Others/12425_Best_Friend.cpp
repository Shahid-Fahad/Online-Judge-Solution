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
vector<ll> d;
ll c = 0;
void div(ll n)
{
    d.clear();
    ll i, x = sqrt(n);
    for (i = 1; i <= x; i++)
    {
        if ((n % i) == 0)
        {
            if (n / i == i)
                d.push_back(i);
            else
            {
                d.push_back(i);
                d.push_back(n / i);
            }
        }
    }
}
vector<long long int> prime;
bool mark[1000001];
void sieve(ll n)
{
    ll i, j;
    prime.clear();
    mark[0] = true;
    mark[1] = true;
    mark[2] = false;
    prime.push_back(2);
    for (i = 4; i <= n; i += 2)
        mark[i] = true;
    ll sqrtn = sqrt(n);
    for (i = 3; i <= sqrtn; i = i + 2)
    {
        if (mark[i] == false)
        {
            for (j = i * i; j <= n; j += 2 * i)
                mark[j] = true;
        }
    }
    for (ll i = 3; i <= n; i = i + 2)
        if (mark[i] == false)
            prime.push_back(i);
}
ll etf(ll n)
{
    ll ans = n, sq = sqrt(n);
    for (ll i = 0; i < prime.size() && prime[i] <= sq; i++)
    {
        ll p = prime[i];
        if (n % p == 0)
        {
            while (n % p == 0)
            {
                n = n / p;
            }
            ans = (ans / p) * (p - 1);
            sq = sqrt(n);
        }
    }
    if(n!=1)
    {
        ans = (ans/n) *(n-1);
    }
    return ans;
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll t=1;
    sieve(1000005);
    cin >> t;
    ll tc=0;
    while(t--)
    {
        tc++;
        cout << "Case " << tc << endl;
        ll n,q;
        cin >> n >> q;
        div(n);
        sort(d.begin(),d.end());
        ll ans[50005]={0};
        vector<pair<ll,ll>>v;
        for(ll i=0;i<d.size();i++)
        {
           v.pb({d[i],etf(n/d[i])});
        }
        for(ll i=1;i<v.size();i++)
        v[i].ss+=v[i-1].ss;
        while(q--)
        {
            ll x;
            cin >> x;
            if(x<=0)
            {
                cout << 0 << endl;
                continue;
            }
            ll y = upper_bound(d.begin(),d.end(),x)-d.begin();
            cout << v[y-1].ss << endl;
        }
    }
}
