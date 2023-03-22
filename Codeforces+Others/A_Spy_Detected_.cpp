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
        ll arr[n+5];

        for(ll i=1;i<=n;i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for(ll i=1;i<=n;i++)
        {
            if(mp[arr[i]]==1)
            {
                cout << i << endl;
            }
        }
    }

}
