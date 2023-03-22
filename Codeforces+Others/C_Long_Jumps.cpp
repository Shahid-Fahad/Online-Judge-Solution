///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll arr[n+5],arr2[n+5],i;
        for(i=1;i<=n;i++)
        {
            cin >> arr[i];
        }
        ll mx=0;
        for(i=n;i>=1;i--)
        {
            ll x = i+arr[i];
            if(x<=n)
            {
                arr2[i] = arr2[x] + arr[i];

            }
            else
            {
                arr2[i] = arr[i];
            }

            mx = max(mx,arr2[i]);
        }
        for(i=1;i<=n;i++)
        cout << arr2[i] << " ";
        cout << endl;
        cout << mx << endl;

    }

}
