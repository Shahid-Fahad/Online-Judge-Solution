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
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        ll c = 0;
        for (ll j = i - 1; j >= 0; j--)
        {
              if (arr[j] > arr[i] || arr[j] > arr[j+1])
            {
                break;
            }
            c++;
        }
        for (ll j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i] || arr[j] > arr[j - 1])
            {
                break;
            }
            c++;
        }
       
        c++;
        mx = max(mx, c);
    }
    cout << mx << endl;
}
