///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char arr[4][4];
    ll i, j;
    ll n=4;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            ll h = 0, d = 0;
            if (arr[i][j] == '#')
                h++;
            else
                d++;
            if (arr[i][j+1] == '#')
                h++;
            else
                d++;
            if (arr[i+1][j] == '#')
                h++;
            else
                d++;
            if (arr[i+1][j+1] == '#')
                h++;
            else
                d++;
            if(min(h,d)==0||min(h,d)==1)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
}
