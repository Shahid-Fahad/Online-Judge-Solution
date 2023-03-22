///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll dp[1000];
ll tar, c = 0;
ll wc(ll n)
{
    if (n == tar)
    {
        return 1;
    }
    else if(n>tar)
    return 0;
    if(dp[n]!=-1)
    return dp[n];
    ll a, b, c;
    a = wc(n + 1);
    b = wc(n + 2);
    c = wc(n + 3);

    return dp[n]=(a+b+c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(dp,-1,sizeof(dp));
    ll n;
    cin >> n >> tar;
    cout << wc(n) << endl;
}
