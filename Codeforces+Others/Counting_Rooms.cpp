///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll dx[]={-1,0,1,0};
ll dy[]={0,1,0,-1};
char arr[1001][1001];
ll vis[1001][1001];
ll r,c;
bool isvalid(ll i,ll j)
{
    if(i<0||i>r-1||j<0||j>c-1)
    return false;
    if(vis[i][j]==1||arr[i][j]=='#')
    return false;

    return true;
}
void dfs(ll x, ll y)
{
    vis[x][y]=1;
    for(ll i=0;i<4;i++)
    {
        if(isvalid(x+dx[i],y+dy[i]))
        dfs(x+dx[i],y+dy[i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> r >> c;
    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    ll cc=0;
    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            if(arr[i][j]=='.'&&vis[i][j]==0)
            {
                dfs(i,j);
                cc++;
            }
        }
    }
    cout << cc << endl;
}
