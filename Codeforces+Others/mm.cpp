///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll dp[1005][1005];
string print(string x,string y,ll n, ll m)
{
    string ans="";
    ll i=n,j=m;
    while(i>0&&j>0)
    {
        if(x[i-1]==y[j-1])
            {
                ans = ans+x[i-1];
                i--;
                j--;
            }
        else
        {
            if(dp[i][j-1]>dp[i-1][j])
            {
                j--;
            }
            else
                i--;
        }
    }
    cout << ans << endl;
    return ans;
}
ll LCS(string x,string y,ll n,ll m)
{
    if(n==0||m==0)
        {
            return 0;
        }
    if(dp[n][m]!=-1)
        return dp[m][n];
    if(x[n-1]==y[m-1])
        return dp[m][n]= 1+LCS(x,y,n-1,m-1);
    else
    {
        return dp[m][n]= max((LCS(x,y,n,m-1)),(LCS(x,y,n-1,m)));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin >> n >> m;
    string x,y;
    for(ll i=0;i<n;i++)
    {
        ll k;
        cin >> k;
        x.push_back((k+48));
    }
    for(ll i=0;i<m;i++)
    {
        ll k;
        cin >> k;
        y.push_back((k+48));
    }
    cout << x << " " << y << endl;
    ll a = LCS(x,y,x.size(),y.size());
    string ans = print(x,y,x.size(),y.size());
    reverse(ans.begin(),ans.end());
    for(ll i=0;i<ans.size();i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

