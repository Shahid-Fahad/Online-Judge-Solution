///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int n,lim;
int pr[1005];
int pg[1005];
int dp[1005][10005];
int book(int i,int c)
{
    if(i==-1||c==0)
    {
        return 0;
    }
    if(dp[i][c]!=-1)
    return dp[i][c];
 
    if(pr[i]<=c)
    {
        int a,b;
        a = book(i-1,c-pr[i])+pg[i];
        b = book(i-1,c);
        return dp[i][c]=max(a,b);
    }
    else
    {
        return dp[i][c] = book(i-1,c);
    }
 
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> lim;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin >> pr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> pg[i];
    }
    cout << book(n-1,lim) << endl;
 
 
}