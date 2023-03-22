///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
char arr[10][10];
ll vis[10][10];
ll dx[]={-1,0,0};
ll dy[]={0,1,-1};
ll n,m;
bool isvalid(ll i,ll j)
{
    if(i<0||i>n-1||j<0||j>m-1)
    return false;
    if(arr[i][j]!='I'&&arr[i][j]!='E'&&arr[i][j]!='H'&&arr[i][j]!='O'&&arr[i][j]!='V'&&arr[i][j]!='A'&&arr[i][j]!='#'||vis[i][j]==1)
    return false;

    return true;
}
void dfs(ll x,ll y)
{
    vis[x][y]=1;
    if(isvalid(x-1,y))
    {
        cout << "forth";
        if(arr[x-1][y]=='#')
        cout << endl;
        else
        cout << " ";
        dfs(x-1,y);
    }
    if(isvalid(x,y+1))
    {
        cout << "right";
        if(arr[x][y+1]=='#')
        cout << endl;
        else
        cout << " ";
        dfs(x,y+1);
    }
    if(isvalid(x,y-1))
    {
        cout << "left";
        if(arr[x][y-1]=='#')
        cout << endl;
        else
        cout << " ";
        dfs(x,y-1);
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
        memset(vis,0,sizeof(vis));
        cin >> n >> m;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin >> arr[i][j];
            }
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(vis[i][j]==0&&arr[i][j]=='@')
                {
                    dfs(i,j);
                }
            }
        }
    }

}
