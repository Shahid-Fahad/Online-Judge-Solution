///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll dx[]={-1,0,1,0,1,1,-1,-1};
ll dy[]={0,1,0,-1,1,-1,1,-1};
char arr[30][30];
ll vis[30][30];
ll n;
bool isvalid(ll i,ll j)
{
    if(i<0||i>n-1||j<0||j>n-1)
    return false;
    if(arr[i][j]=='0'||vis[i][j]==1)
    return false;

    return true;

}
void dfs(ll x,ll y)
{
    vis[x][y]=1;
    for(ll i=0;i<8;i++)
    {
        if(isvalid(x+dx[i],y+dy[i]))
        {
            dfs(x+dx[i],y+dy[i]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc=0;
    while(cin >>n)
    {
        tc++;
        memset(vis,0,sizeof(vis));
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            cin >> arr[i][j];
        }
        ll we=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(arr[i][j]=='1'&&vis[i][j]==0)
                {
                    dfs(i,j);
                    we++;
                }
            }
        }
       cout << "Image number " << tc << " contains " << we << " war eagles." << endl;
    }

}
