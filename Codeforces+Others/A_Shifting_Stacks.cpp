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
        ll c = 0;
        ll arr[n];
        ll s = ((n - 2) * (n - 1)) / 2;
        ll mn = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        arr[1] = arr[0] + arr[1];
        arr[0] = 0;
        ll f = 0;
        for (ll i = 1; i < n; i++)
        {
            if (arr[i] < i)
            {
                f = 1;
                break;
            }
            ll x = arr[i] - i;
            if (i != n - 1)
            {
                arr[i + 1] = arr[i + 1] + x;
                arr[i] = arr[i] - x;
            }
        }
        if(f==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
}