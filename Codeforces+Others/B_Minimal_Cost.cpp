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
        ll n,u,v;
        ll s=0;
        cin >> n >> u >> v;
        ll arr[n+5];
        for(ll i=1;i<=n;i++)
        cin >> arr[i];
        for(ll i=1;i<n;i++)
        {
           if(arr[i]<arr[i+1])
           {
               ll d=(arr[i+1]+2)-arr[i];
               s = s+min(u,d);
           }
           else if(arr[i]==arr[i+1])
           {
               s = s+min((u+v),(v+v));
           }
           else if(arr[i]-arr[i+1]==1)
           {
               s = s+min(u,v);
           }
        }
        cout << s<< endl;
    
        
    }

}
