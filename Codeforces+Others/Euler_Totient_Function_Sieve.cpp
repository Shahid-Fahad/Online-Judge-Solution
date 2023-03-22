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
#define case(tc) cout << "Case " << tc << ": " << endl;
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

ll Pow(ll c,ll d)
{
    return d==0? 1:c*pow(c,d-1);
}
ll gcd(ll a,ll b)
{
    return b==0? a:gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return ((a*b)/gcd(a,b));
}

ll egcd(ll a,ll b,ll &x,ll &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    ll x1,y1;
    ll gcd=egcd(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return gcd;
}
ll bigMod(ll a,ll b)
{
    a%=mod;
    ll res=1;
    while(b>0)
    {
        if(b&1)res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}

inline ll MOD(ll a)
{
    return (a%mod + mod) %mod ;
}
inline ll modAdd(ll a,ll b)
{
    return MOD( MOD(a) + MOD(b) ) ;
}
inline ll modSub(ll a,ll b)
{
    return MOD( MOD(a) - MOD(b) ) ;
}
inline ll modMul(ll a,ll b)
{
    return MOD( MOD(a) * MOD(b) ) ;
}
inline ll modInv(ll a)
{
    return bigMod(a,mod-2) ;
}
vector<ll> segprime;
vector<long long int>prime;
bool mark[10000005];
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
    ll sqrtn = sqrt(n);
    for(i=3; i<=sqrtn; i=i+2)
    {
        if(mark[i]==false)
        {
            for(j=i*i; j<=n; j+=2*i)
                mark[j]=true;
        }
    }
    for(ll i=3;i<=n;i=i+2)
        if(mark[i]==false)
        prime.push_back(i);

}
vector<ll> segsieve(ll l, ll r)
{
    ll  x =lower_bound(prime.begin(),prime.end(),l)-prime.begin();
    vector<ll>segprime;
    bool isprime[r-l+1];
    ll i,j;
    for(i=0; i<=r-l; i++)
        isprime[i]=true;
    if(l==1)
        isprime[0]=false;
    for(i=x;prime[i]*prime[i]<=r&&i<prime.size(); i++)
    {
        ll cp = prime[i];

        ll base = (l/cp)*cp;
        if(base<l)
            base = base+cp;
        for(j=base; j<=r; j=j+cp)
            isprime[j-l]=false;
        if(base==cp)
            isprime[base-l]=true;
    }
    for(i=0; i<=r-l; i++)
    {
        if(isprime[i]==true)
            segprime.push_back(i+l);
    }
    return segprime;
}
vector<pair<ll,ll>>v;
ll f(ll n)
{
    ll sq = sqrt(n);
    ll res=n;
    for(ll i=0;segprime[i]<=sq&&segprime.size(); i++)
    {
        ll p = segprime[i];
        if(n%p==0)
        {
            while(n%p==0)
            {
                n=n/p;
            }

        sq = sqrt(n);
        res = (res/p) * (p-1);

        }
    }
    if(n!=1)
    {
        res = (res/n) * (n-1);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve(1e7);
    ll l,r;
    cin >> l >> r;
    segprime = segsieve(l,r);
    for(ll i=l;i<=r;i++)
    {
        cout << f(i) << endl;
    }

}
