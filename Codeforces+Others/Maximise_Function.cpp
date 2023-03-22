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
        ll arr[n+5];
        for(ll i=0;i<n;i++)
        cin >> arr[i];
        sort(arr,arr+n);
        ll x = abs(arr[0]-arr[n-1]);
        ll mx=0;
        for(ll i=1;i<=n-2;i++)
        {
            ll ans = abs(arr[i]-arr[0])+abs(arr[i]-arr[n-1]);
            mx = max(ans,mx);
        }
        cout << mx+x << endl;
        
    }

}
