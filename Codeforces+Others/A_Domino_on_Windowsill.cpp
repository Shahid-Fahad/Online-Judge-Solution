///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, a1;
        cin >> n >> a >> a1;
        ll w, b;
        cin >> w >> b;
        ll arr[2][n + 5];
        memset(arr, -1, sizeof(arr));
        for (ll i = 0; i < a; i++)
        {
            arr[0][i] = 1;
        }
        for (ll i = 0; i < a1; i++)
        {
            arr[1][i] = 1;
        }
        for (ll i = 0; i < 2; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (arr[i][j] == 1 && arr[i + 1][j] == 1)
                {
                    w--;
                }
                else if (j < n - 1 && arr[i][j] == 1 && arr[i][j + 1] == 1)
                {
                    w--;
                    j++;
                }
            }
        }
        for (ll i = 0; i < 2; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (arr[i][j] == -1 && arr[i + 1][j] == -1)
                {
                    b--;
                }
                else if (j < n - 1 && arr[i][j] == -1 && arr[i][j + 1] == -1)
                {
                    b--;
                    j++;
                }
            }
        }
        if(w>0||b>0)
        {
            cout << "NO" << endl;
        }
        else
        cout << "YES" << endl;
    }
}
