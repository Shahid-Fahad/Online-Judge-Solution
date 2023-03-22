///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll n;
char arr[1005][1005];
ll dp[1005][1005];
ll mod=1e9+7;
ll path(ll i,ll j)
{
    if(i==n&&j==n)
    return 1;
    if(dp[i][j]!=-1)
    return dp[i][j];
    ll a=0,b=0;

    if(i+1<=n)
    {
        if(arr[i+1][j]=='.')
        a = path(i+1,j);
    }
    if(j+1<=n)
    {
        if(arr[i][j+1]=='.')
        b = path(i,j+1);
    }

    return dp[i][j]=((a%mod)+(b%mod))%mod;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(dp,-1,sizeof(dp));
    cin >> n;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            cin >> arr[i][j];
        }
    }
    if(arr[1][1]=='*')
    {
        cout << 0 << endl;
        return 0;
    }
    cout << path(1,1) << endl;

}
