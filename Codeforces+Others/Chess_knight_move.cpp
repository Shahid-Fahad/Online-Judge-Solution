///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll arr[10][10];
ll vis[10][10];
ll dis[10][10];
ll dx[]={-2,-1,1,2,2,1,-1,-2};
ll dy[]={1,2,2,1,-1,-2,-2,-1};
bool isvalid(ll i,ll j)
{
    if(i<1||i>8||j<1||j>8)
    return false;
    else if(vis[i][j]==1)
    return false;
    else
    return true;
}
void bfs(ll x,ll y)
{
    queue<pair<ll,ll>>q;
    q.push({x,y});
    vis[x][y]=1;
    dis[x][y]=0;
    while(q.size()>0)
    {
        ll curx=q.front().first;
        ll cury=q.front().second;
        q.pop();
        for(ll i=0;i<8;i++)
        {
            if(isvalid(curx+dx[i],cury+dy[i]))
            {
                ll X= curx+dx[i];
                ll Y = cury+dy[i];
                vis[X][Y]=1;
                dis[X][Y] =dis[curx][cury]+1;
                q.push({X,Y});
            }
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        string st,des;
        cin >> st >> des;
        ll sr = st[1]-48;
        ll sc = (st[0]-'a'+1);
        ll dr = (des[1]-48);
        ll dc = (des[0]-'a'+1);
        ll n=1;
        memset(vis,0,sizeof(vis));
        memset(dis,-1,sizeof(dis));
        for(ll i=1;i<=8;i++)
        {
            for(ll j=1;j<=8;j++)
            {
                arr[i][j]=n;
                n++;
            }
        }
        bfs(sr,sc);
        cout << dis[dr][dc] << endl;
    }

}
