///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    ll arr[n + 5];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    while (k--)
    {
        ll x;
        cin >> x;
        ll l = -1, r = n;
        while (r - l > 1)
        {
            ll m = (l + r) / 2;
            if (arr[m] >x)
             r = m;
             else
             {
                 l = m;
             }
             
        }
        if(arr[l]<=x)
        cout << l+1 << endl;
        else
        cout << 0 << endl;

    }
}
