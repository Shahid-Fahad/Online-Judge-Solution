///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll n;
ll vis[35][35];
ll dis[35][35];
char arr[35][35];
ll dx[]={-1,0,1,0};
ll dy[]={0,1,0,-1};
bool isvalid(ll i,ll j)
{
    if(i<1||i>n||j<1||j>n)
    return false;
    else if(arr[i][j]=='T'||vis[i][j]==1)
    return false;
    else
    {
        return true;
    }
    
}
void bfs(ll x,ll y)
{
    queue<pair<ll,ll>>q;
    q.push({x,y});
    vis[x][y]=1;
    while(q.size()>0)
    {
        ll curx = q.front().first;
        ll cury = q.front().second;
        q.pop();
        for(ll i=0;i<4;i++)
        {
            if(isvalid(curx+dx[i],cury+dy[i]))
            {
                ll X = curx+dx[i];
                ll Y = cury+dy[i];
                vis[X][Y]=1;
                dis[X][Y] = dis[curx][cury]+1;
                q.push({X,Y});
            }
        }        
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            cin >> arr[i][j];
        }
    }

    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(arr[i][j]=='S')
            bfs(i,j);
           else  if(arr[i][j]=='E')
            {
                cout << dis[i][j] << endl;
                return 0;
            }
        }

    }
}
