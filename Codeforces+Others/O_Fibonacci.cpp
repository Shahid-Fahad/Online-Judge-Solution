///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll dp[100000];
ll fib(ll n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
   if(dp[n]!=-1)
   return dp[n];
   return dp[n] = fib(n-1) + fib(n-2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    cout << fib(n) << endl;
}
