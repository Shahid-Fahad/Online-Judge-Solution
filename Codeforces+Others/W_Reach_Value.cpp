//ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll n;
map<ll,ll>dp;
ll f(ll in)
{
    if(in==n)
    return 1;
    else if(in>n)
    return 0;
    ll a,b;
    if(dp.find(in)!=dp.end())
    {
        return dp[in];
    }
    a = f(in*10);
    b = f(in*20);
    return dp[in]=a||b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        dp.clear();
        cin >> n;
        if(f(1))
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }

}