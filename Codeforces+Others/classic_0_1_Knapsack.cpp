///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll wt[100005], val[100005];
ll dp[2005][2005];
ll knapsack(ll n, ll w)
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n - 1][w - 1] != -1)
        return dp[n - 1][w - 1];
    else if (wt[n - 1] <= w)
    {
        return dp[n - 1][w - 1] = max((val[n - 1] + knapsack(n - 1, w - wt[n - 1])), (knapsack(n - 1, w)));
    }
    else if (wt[n - 1] > w)
        return dp[n - 1][w - 1] = knapsack(n - 1, w);

    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        memset(dp, -1, sizeof(dp));
        ll n, w;
        cin >> w >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> wt[i] >> val[i];
        }
        cout << knapsack(n, w) << endl;
    }
}
