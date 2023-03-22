///Bishmillahir Rahmanir Raheem
//sajeedreefy
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;
#define pb push_back
#define pf push_front
#define ull unsigned long long
#define fr0(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for (ll i=1;i<=n;i++)
#define ff first
#define ss second
#define sp " "
#define debug cout<<"dhukse ekhane "<<endl;
inline ll MOD(ll a){return (a%mod + mod) %mod ;}
inline ll modAdd(ll a,ll b){return MOD( MOD(a) + MOD(b) ) ;}
inline ll modSub(ll a,ll b){return MOD( MOD(a) - MOD(b) ) ;}
inline ll modMul(ll a,ll b){return MOD( MOD(a) * MOD(b) ) ;}
void fastIO(){ios_base::sync_with_stdio(false); cin.tie(NULL);}
ll dx[]={-1,1,0,0};
ll dy[]={0,0,-1,1};
//ll dx[8]={-1,1,0,0,-1,-1,1,1};
//ll dy[8]={0,0,-1,1,-1,1,-1,1};
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds ;
template <typename PB>
using ordered_set = tree<PB,null_type,less<PB>,rb_tree_tag,tree_order_statistics_node_update> ;
*x.find_by_order(pos) ----> returns the value at "pos" index in the set 0-based
x.order_of_key(value)     ----> returns the position of "value" in the set 0-based
*/
bool isprime(ll x)
{
    if(x<2) return false;
    if(x<4) return true;
    if(!(x&1)) return false;
    for(int i=3; i*i<=x; i+=2) if(x%i==0) return false;
    return true;
}

string toBinary(ll n)
{
    string r;
    while(n!=0)
    {
        r=(n%2==0 ?"0":"1")+r;
        n/=2;
    }
    return r;
}
ll bi_ex(ll x,ll n)
{
    ll pro=1;
    while(n>0)
    {
        if(n%2==1) pro=((pro%mod)*(x%mod))%mod;
        x=((x%mod)*(x%mod))%mod;
        n>>=1;
    }
    return pro%mod;
}
ll powr(ll n,ll x)
{
    if(x==0) return 1;
    if(!(x&1)) return powr(n*n,x>>1);
    else return n*powr(n*n,(x-1)>>1);
}

signed main()
{
    fastIO();
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ll t=1,mn,q,p,c,i,j,m,ans,a,b,d,x,y,k,n,mx;
    //scanf("%lld",&t);
    c=0;
    cin >> t;
    while(t--)
    {
        cin >> n;
        set <ll> st;
        vector <ll> vec;
        x=2;
        if(n==1) {cout << 1 << endl;continue;}
        else if(n&1)
        {
            x=1;
            while(1)
            {
                //if(st.size()>=n) break;
                if(vec.size()==n-1)
                {
                    x=2*n;
                    while(st.count(x)) x--;
                    vec.pb(x);
                    break;
                }
                if(!st.count(x) and !st.count(x*2))
                {
                    vec.pb(x);
                    vec.pb(x*2);
                }
                st.insert(x);
                st.insert(x*2);
                x++;
            }
        }
        else
        {
            x=2;
            while(vec.size()<n)
            {
                if(!st.count(x) and !st.count(x*2))
                {
                    vec.pb(x);
                    vec.pb(x*2);
                }
                st.insert(x);
                st.insert(x*2);
                x++;
            }
        }
        for(auto it:vec) cout << it << sp;
        cout << endl;
    }
    return 0;
}