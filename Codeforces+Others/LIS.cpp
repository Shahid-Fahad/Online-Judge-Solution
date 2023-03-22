#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[200005];
ll arr[200005];
ll n;
ll lis(ll i)
{
    if(i==n)
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    ll ans=0;
    for(ll j=i+1;j<n;j++)
    {
        if(arr[j]>arr[i])
            ans = max(ans,lis(j));
    }
    return dp[i]=ans+1;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ans = max(ans,lis(i));
    }
    cout << ans << endl;
}