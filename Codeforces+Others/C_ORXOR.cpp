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
    vector<ll>v;
    map<ll,ll>mp;
    for(ll i=1;i<=n;i++)
    {
        cin >> arr[i];
        v.push_back(arr[i]);
        mp[arr[i]]++;
    }
    sort(v.begin(),v.end());
    ll x = v[v.size()-1];
    if(mp[x]>1)
    {
        cout << 0 << endl;
        return 0;
    }
    ll ind;
    for(ll i=1;i<=n;i++)
    {
        if(arr[i]==x)
        {
            ind=i;
            break;
        }
    }
    ll mn =INT_MAX;
    for(ll i=ind-1;i>=1;i--)
    {
        if(arr[i]==x&&mp[arr[i]]==1)
        continue;
        ll val = arr[i]^x;
        mn = min(val,mn);
    }
    cout << mn << endl;
    


}
