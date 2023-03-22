///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n >> k;
    ll arr[n];
    ll s=0;
    arr[0]=0;
    for(ll i=1;i<=n;i++)
    {
        cin >> arr[i];
        s = s + arr[i];
        arr[i] = s;
    }
    ll mn=1e18;
    ll ans;
    for(ll i=k;i<=n;i++)
    {
        ll a = arr[i]-arr[i-k];
        if(a<mn)
        {
            mn = a;
            ans = i-(k-1);
        }

    }
    cout  << ans << endl;

}
