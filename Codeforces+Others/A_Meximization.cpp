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
        ll arr[n];
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            cout << it.first << " ";
        }
        for(auto it:mp)
        {
            if(it.second>1)
            {
                for(ll i=1;i<it.second;i++)
                cout << it.first << " ";
            }

        }
        cout << endl;
        
    }

}
