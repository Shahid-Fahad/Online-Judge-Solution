///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
   /// ios_base::sync_with_stdio(false);
    ///cin.tie(NULL);
    ll n,l;
    cin >>  n >> l;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    ll mx=0;
    for(ll i=0;i<n-1;i++)
    {
        mx = max(mx,arr[i+1]-arr[i]);
    }
    ld ans = mx/2.0;
    ld ans2 = max((arr[0]-0.0),(l-arr[n-1]+0.0));
    printf("%Lf\n",max(ans,ans2));
    


}
