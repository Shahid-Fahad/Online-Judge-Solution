// white ربِّ زِدْن
#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>//common file for PBDS
#include<ext/pb_ds/tree_policy.hpp> //including tree_order_statistics_node_update
using namespace __gnu_pbds; //namespace
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> //macro definition

#define debug(...) cerr << "[" << #__VA_ARGS__ << "] =>", dbg_out(__VA_ARGS__)
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Up, typename... Down> void dbg_out(Up U, Down... D) { cerr << ' ' << U; dbg_out(D...); }
 
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
#define ss second
#define ff first
#define pb push_back
#define ppb pop_back
#define pf push_front
#define mkp make_pair
#define PI 3.1415926536
#define setp setprecision
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define Yes cout<<"YES"<<endl; 
#define No cout<<"NO"<<endl;
#define bye  continue;
#define edl cout<<endl;
#define all(x) (x).begin(), (x).end()
#define rall(s) s.rbegin(), s.rend()
#define sz(v) ((int)(v).size())
#define fo(n) for(int i=0;i<n;i++)
#define rfo(i,n) for(i=n-1;i>=0;i++)
#define az(x) memset(x,0,sizeof(x));
#define eps 1e-12
#define tani(a) atan(a)/(pi/180)
#define sini(a) asin(a)/(pi/180)
#define cosi(a) acos(a)/(pi/180)
#define cos(a)  cos(a*pi/180)
#define sin(a)  sin(a*pi/180)
#define tan(a)  tan(a*pi/180)
#define srt(x) sort(x.begin(),x.end())
#define rsrt(x) sort(x.begin(),x.end(),greater<>())
#define torad(x) ((x) * ((2*acos(0))/180.0))
#define todeg(x) ((x) * (180.0/(2*acos(0))))
#define fixAngle(x) ( (x) > 1 ? 1 : (x) < -1 ? -1 : (x))
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))
#define dbg(x) cout<<x<<endl;
#define printv(v) for(i=0;i<sz(v);i++)cout<<v[i]<<' ';edl
#define scanv(n,v) for(i=0;i<n;i++){ll x; cin>>x,v.pb(x);}
#define scanm(n,mp) for(i=0;i<n;i++){ll x; cin>>x,mp[x]++;}
bool PRIME(ll p){if (p<=1)return false;if (p<=3)return true;if(p%2==0||p%3==0) return false;for(int i=5;p>=i*i;i=i+6){if(p%i==0||p%(i+2)==0) return false;}return true;}
int sum_digit(int x) { int sum=0; while(x>0){ sum+=x%10; x/=10; } return sum; }
ll reverse_num(ll n){ ll tmp=n, ans=0, r; while(tmp>0){ r=tmp%10; ans=ans*10+r; tmp/=10; } return ans; }
ll factorial(ll n){ ll i, ans=1; for(i=n; i>1; i--){ans*=i;} return ans; }
ll to_int(string s){ int len = sz(s);ll ans=0;fo(len)ans=ans*10+(int)s[i]-'0';return ans; }
string to_str(ll x){stringstream ss;ss<<x;return ss.str();}
ll todec(string s){return stoi(s, 0, 2);}
string toBinary(int n){string r;while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}return r;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return a.second<b.second;}
//sort(vect.begin(), vect.end(), sortbysec);
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

//tools{
#define FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define gc()(is==it?it=(is=in)+fread(in,1,Q,stdin),(is==it?EOF:*is++):*is++)
    const int Q=(1<<24)+1;
    char in[Q],*is=in,*it=in,c;
    void read(long long &n){
    for(n=0;(c=gc())<'0'||c>'9';);
    for(;c<='9'&&c>='0';c=gc())n=n*10+c-48;}
void in_out(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
void rTime(){
    cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    if(((float)clock()/CLOCKS_PER_SEC)>=1.0)
        cerr<<"Need to optimize!!"<<endl;
    else
        cerr<<"RuntimeOKAY!"<<endl<<endl;
}
/////////////////////////////////////////////end of tools///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////main//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ll mx=100000;
bool is_prime[100001]; 
vector<ll>primes;
void seive()
{
   ll i,j;
   is_prime[0]=1;
   is_prime[1]=1;
 
   for(i=2;i<=mx;i++)
   {
      if(is_prime[i]==0)
      {
        primes.pb(i);
        for(j=i*i;j<=mx;j+=i) ///or i+i
            is_prime[j]=1;
      }
   }   
}

ll arr[101][101]={};
void ncr()
{
  arr[1][0]=1;
  arr[1][1]=1;
  int i,j;
  for (i = 2; i <= 100; i++) {
      arr[i][0] = 1;
      for (j = 1; j <= i; j++) {
          arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
      }
  }
}
void Prongs();



int main() 
{
    FASTER;
    // in_out();
    // Prongs();
    
    ll i,j,n,t,x,y,z,m,cnt{},o,p;
    string s,s1,s2;
    vector<char>ch;
    map<ll,ll>mp;
    vector<ll>v1,v,v2;
    string binary = bitset<8>(11).to_string(); //to binary
    ordered_set sat;
    set<ll> st;
    
    cin>>n>>m;
    int sq= sqrt(n);
    for (int i = 1; i  <= sq; ++i) {
        if (n % i == 0) {
            v.pb(i);
            if(i!=n/i)
            v.pb(n/i);
        }
    }
    srt(v);
    
    if(sz(v)<m)
        dbg(-1)
    else
        dbg(v[--m])

    //rTime();
    return 0;
}

void Prongs() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll e{},o{},y,k,i,j,t,z,m,n,x,cnt{},p,l,r;
        unordered_set<ll>st;
        vll v;
    }
        
}