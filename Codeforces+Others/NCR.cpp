ll dp[105][105];
ll ncr(ll n,ll r)
{
    if(n==r||r==0)
        return 1;
    if(n<r)
        return 0;
    if(dp[n][r]!=0)
    return dp[n][r];
    return dp[n][r]=ncr(n-1,r-1) + ncr(n-1,r);
}