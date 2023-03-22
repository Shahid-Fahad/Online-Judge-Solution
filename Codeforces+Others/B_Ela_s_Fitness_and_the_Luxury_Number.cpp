/* Bismillahir Rahmanir Rahim */ 
/* Author: _MUSAFIR_ */ 
 
#include<bits/stdc++.h> 
using namespace std; 
 
#define     ll            long long int 
#define     ull           unsigned long long int 
#define     sz(n)         (int)(n).size() 
#define     testCase      ll tc;cin>>tc;while(tc--) 
#define     endl          '\n' 
#define     pb            push_back 
#define     optimize()    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
 
 
ll solve(ll n) 
{ 
    ll x=sqrtl(n); 
    ll ans=3*(x-1); 
    if(n>=x*x+2*x)ans+=3; 
    else if(n>=x*x+x)ans+=2; 
    else if(n>=x*x)ans+=1; 
    return ans; 
} 
 
int main() 
{ 
    int t; 
    cin>>t; 
    while(t--) 
    { 
        ll l,r; 
        cin>>l>>r; 
        ll ans = solve(r)-solve(l-1); 
        cout << ans << endl; 
    } 
}