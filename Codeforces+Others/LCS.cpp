#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s1,s2;
ll dp[1001][1001];
ll lcs(ll i,ll j)
{
    if(i==s1.size()||j==s2.size())
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    ll ans=0;
    if(s1[i]==s2[j])
    {
        ans = 1+lcs(i+1,j+1);
    }
    else
    {
        ans = max(ans,lcs(i+1,j));
        ans = max(ans,lcs(i,j+1));
    }
    return dp[i][j]=ans;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>s1>>s2;
    cout << lcs(0,0) << endl;
}