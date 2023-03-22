//Starting in the name of Lord
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define Yes cout<<"Yes"<<endl
#define yes cout<<"yes"<<endl
#define No cout<<"No"<<endl
#define NO cout<<"NO"<<endl
#define no cout<<"no"<<endl
#define YES cout<<"YES"<<endl
#define asort(x) sort((x).begin(),(x).end())
#define rsort(x) reverse(x.begin(),x.end())
#define ll long long
#define deciset(x) cout <<setprecision(x) <<fixed;
#define endl "\n"
#define pb emplace_back
#define mp make_pair
#define jokhon while
#define PI 2*acos(0.0)
#define boost ios::sync_with_stdio(false);cin.tie(0)
void solve()
{
    ll n;
    cin>>n;
    vector < pair < ll , ll > > v;
    vector< ll > s , s1;
    vector< ll > :: iterator it;
    set< ll > lol;
    jokhon( n-- )
    {
        ll a,b;
        cin>>a>>b;
        s.pb(a);
        s1.pb(b);
        lol.insert(a);
        lol.insert(b);
        v.push_back({a , b});
    }
    if( lol.size() == 1) cout<<s[0]<<endl;
    else {
    asort(s);
    asort(s1);
    ll flag=0;
    ll p = s[0] , q = s1[0];
    ll  ans=0;
    for ( auto x : v )
    {
        if( ( x.first == p && x.second != q ) ) flag = 1; 
        else if ( x.second == p && x.first != q  )  
         flag=1;
    }
    if( flag ) ans = max( p , q);
    else ans = (p + q);
    if( flag) cout<<ans<<endl;
    else{
        ll o=ans,op=ans;
        for(auto x : s){
            if( x > q && x != p ){
                o=x;
                break;
            }
        }
        for(auto x : s1){
            if( x > p && x != q){
                op=x;
                break;
            }
        }
        cout<< min( ans , min( op , o))<<endl;

}
    }
}
int main()
{
 
    boost;
    #ifndef ONLINE_JUDGE
    //freopen("C:/Users/User/Desktop/C/input.txt", "r", stdin);
    //freopen("C:/Users/User/Desktop/C/output.txt", "w", stdout);
     #endif
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
}