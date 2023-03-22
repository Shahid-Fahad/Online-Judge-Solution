///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll arr[n+5];
    map<ll,ll>mp;
    ll mx=0;
    for(ll i=1;i<=n;i++)
    {
        cin >> arr[i];
        mp[arr[i]-i]+=arr[i];
        mx = max(mx,mp[arr[i]-i]);
    }
    cout << mx << endl;

}
