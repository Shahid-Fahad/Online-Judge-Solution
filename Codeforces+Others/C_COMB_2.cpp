///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int n,s;
int arr[105];
int dp[105][1000005];
const int mod=1e9+7;
int csum(int i,int st)
{
    if(st==s)
    return 1;
    else if(st>s)
    return 0;

    if(dp[i][st]!=-1)
    return dp[i][st];
    ll a=0,b=0;
    if(arr[i]+st<=s)
    a = csum(i,st+arr[i]);
    if(i+1<n)
    b = csum(i+1,st);

    return dp[i][st]=(a+b)%mod;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> s;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
   
    int x = csum(0,0);
    cout << x << endl;
}
