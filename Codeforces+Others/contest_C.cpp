///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll arr[n];
    ll i;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    ll a = 0, b = 0, x = 0, y = n - 1, t = 1;
    while (x<=y)
    {
        if (t == 1)
        {
            if (arr[x] > arr[y])
            {
                a = a + arr[x];
                x++;
            }
            else
            {
                a = a + arr[y];
                y--;
            }
            t = 2;
        }
        else
        {
            if (arr[x] > arr[y])
            {
                b = b + arr[x];
                x++;
            }
            else
            {
                b = b + arr[y];
                y--;
            }
            t = 1;
        }
    }
        cout << a << " " << b << endl;
}
