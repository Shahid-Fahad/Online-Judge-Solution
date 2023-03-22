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
        ll n;
        cin >> n;
        pair<ll, ll> s1, s2;
        ll f = 0;
        char arr[n + 5][n + 5];
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '*')
                {
                    if (f == 0)
                    {
                        f++;
                        s1 = {i, j};
                    }
                    else
                    {
                        s2 = {i, j};
                    }
                }
            }
        }

        if (s1.first == s2.first)
        {
            if (s1.first + 1 <= n)
            {
                arr[s1.first + 1][s1.second] = '*';
                arr[s2.first + 1][s2.second] = '*';
            }
            else if (s1.first - 1 >= 1)
            {
                arr[s1.first - 1][s1.second] = '*';
                arr[s2.first - 1][s2.second] = '*';
            }
        }
        else if (s1.second == s2.second)
        {
            if (s1.second + 1 <= n)
            {
                arr[s1.first][s1.second + 1] = '*';
                arr[s2.first][s2.second + 1] = '*';
            }
            else if (s1.second - 1 >= 1)
            {
                arr[s1.first][s1.second - 1] = '*';
                arr[s2.first][s2.second - 1] = '*';
            }
        }
        else
        {
            arr[s2.first][s1.second] = '*';
            arr[s1.first][s2.second] = '*';
        }
        ///
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}
