///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll find(ll n, ll arr[])
{
    if (arr[n] < 0s)
        return n;
    else
        return arr[n] = find(arr[n], arr);
}
void Union(ll x, ll y, ll arr[])
{
    arr[x] = arr[x] - abs(arr[y]);
    arr[y] = x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, r;
        cin >> n >> r;
        ll arr[n + 5];
        for (ll i = 1; i <= n; i++)
        {
            arr[i] = -1;
        }
        while (r--)
        {
            ll x, y;
            cin >> x >> y;
            ll a = find(x, arr), b = find(y, arr);
            if (a != b)
             Union(a, b,arr);
        }
        ll c = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (arr[i] < 0)
                c++;
        }
        cout << c-1 << endl;
        while (n--)
        {
            if (c > 0)
            {
                cout << 1;
                c--;
            }

            else
                cout << 0;
        }
        cout << endl;
    }
}
