///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    cin >> n >> q;
    ll arr[n+5];
    map<ll,ll>mp;
    for(ll i=1;i<=n;i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    while(q--)
    {
        ll t,x;
        cin >> t >> x;
        if(t==1)
        {
            if(arr[x]==0)
            {
                arr[x]=1;
                mp[1]++;
                mp[0]--;
            }
            else
            {
                arr[x]=0;
                mp[1]--;
                mp[0]++;
            }
        }
        else
        {
            if(mp[1]<x)
            cout << 0 << endl;
            else
            cout << 1 << endl;
        }
        
    }

}
