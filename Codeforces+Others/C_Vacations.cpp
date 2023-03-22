///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll n;
ll arr[105];
ll dp[105][105];
ll vac(ll i,ll cd)
{
    if(i==n)
    return 0;

    if(dp[i][cd]!=-1)
    return dp[i][cd];

    if(cd==0)
    {
        if(arr[i]==1)
        {
           return dp[i][cd]= vac(i+1,4);
        }
        if(arr[i]==2)
        {
          return dp[i][cd]=vac(i+1,5);
        }
        if(arr[i]==3)
        {
            return dp[i][cd]= min(vac(i+1,4),vac(i+1,5));
        }
        if(arr[i]==0)
        {
            return dp[i][cd]= vac(i+1,0)+1;
        }
    }
    if(cd==4)
    {
        if(arr[i]==1)
        {
           return dp[i][cd]= vac(i+1,0)+1;
        }
        if(arr[i]==2)
        {
          return dp[i][cd]=vac(i+1,5);
        }
        if(arr[i]==3)
        {
            return dp[i][cd]= min(vac(i+1,0)+1,vac(i+1,5));
        }
        if(arr[i]==0)
        {
            return dp[i][cd]= vac(i+1,0)+1;
        }
    }
    if(cd==5)
    {
        if(arr[i]==1)
        {
           return dp[i][cd]= vac(i+1,4);
        }
        if(arr[i]==2)
        {
          return dp[i][cd]=vac(i+1,0)+1;
        }
        if(arr[i]==3)
        {
            return dp[i][cd]= min(vac(i+1,4),vac(i+1,0)+1);
        }
        if(arr[i]==0)
        {
            return dp[i][cd]= vac(i+1,0)+1;
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    memset(dp,-1,sizeof(dp));
    for(ll i=0;i<n;i++)
    cin >> arr[i];

    cout << vac(0,0) << endl;


}
