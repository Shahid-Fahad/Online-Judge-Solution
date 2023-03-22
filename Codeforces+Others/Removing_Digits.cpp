//Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll dp[1000005], x;
ll f(ll n)
{
    if(n==0)
    return 0;
    ll temp = n, minStep = 1e6 + 4;
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = 0;
    while (temp != 0)
    {
        ll digit = temp % 10;
        temp /= 10;
        if (digit != 0)
        {
            minStep = min(minStep, 1 + f(n - digit));
        }
    }
    dp[n] = minStep;
    return dp[n];
}
int main()
{
    cin >> x;
    memset(dp, -1, sizeof(dp));
    cout << f(x) << " ";
}