///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll n;
ll vis[101][101];
char arr[101][101];
ll dx[] = {-1, 0, 1, 0};
ll dy[] = {0, 1, 0, -1};
bool isvalid(ll i, ll j)
{
    if (i < 0 || i > n - 1 || j < 0 || j > n - 1)
        return false;
    if (arr[i][j] == '.' || vis[i][j] == 1)
        return false;

    return true;
}
void dfs(ll x, ll y)
{
    vis[x][y] = 1;
    for (ll i = 0; i < 4; i++)
    {
        if (isvalid(x + dx[i], y + dy[i]))
        {
            dfs(x + dx[i], y + dy[i]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for (ll tc = 1; tc <= t; tc++)
    {
        cin >> n;
        memset(vis, 0, sizeof(vis));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        ll bs=0;
        cout << "Case " << tc << ": ";
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (arr[i][j] == 'x' && vis[i][j] == 0)
                {
                    dfs(i, j);
                    bs++;
                }
            }
        }
        cout << bs << endl;
    }
}
