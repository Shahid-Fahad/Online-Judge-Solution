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
        map<ll,ll>mp;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;

        }

        cout << mp[1] + mp[3] << endl;
    }

}
