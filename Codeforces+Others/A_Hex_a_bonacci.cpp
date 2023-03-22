///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define mod 10000007
ll a,b,c,d,e,f;
ll dp[100005];
ll fib(ll n)
{
    if(n==0)
    return a;
    if(n==1)
    return b;
    if(n==2)
    return c;
    if(n==3)
    return d;
    if(n==4)
    return e;
    if(n==5)
    return f;

    if(dp[n]!=-1)
    return dp[n];

    return dp[n] = ((fib(n-1)%mod) + (fib(n-2)%mod) + (fib(n-3)%mod) + (fib(n-4)%mod) + (fib(n-5)%mod) +(fib(n-6)%mod))%mod;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    ll tc=0;
    while(t--)
    {
        tc++;
        memset(dp,-1,sizeof(dp));
        cout << "Case " << tc << ": ";
        ll n;
        cin >> a >> b >> c >> d >> e >> f >> n;

        cout << fib(n)%mod << endl;

    }

}
