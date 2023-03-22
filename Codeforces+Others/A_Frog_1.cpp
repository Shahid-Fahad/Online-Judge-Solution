///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll arr[200000];
ll dp[200000];
ll n;
ll frog(ll i)
{
    if (i == n-1)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    ll a = 1e8, b = 1e8;
    if (i <= n - 2)
        a = frog(i + 1) + abs(arr[i] - arr[i + 1]);
    if (i <= n - 3)
        b = frog(i + 2) + abs(arr[i] - arr[i + 2]);

    return dp[i] = min(a, b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << frog(0) << endl;
}
