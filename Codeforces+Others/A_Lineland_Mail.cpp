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
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);

    for(ll i=0;i<n;i++)
    {
        if(i==0)
        cout << abs(arr[i]-arr[i+1]) << " " << abs(arr[i]-arr[n-1]) << endl;
        else if(i==n-1)
        {
            cout << abs(arr[i]-arr[i-1]) << " " << abs(arr[i]-arr[0]) << endl;
        }
        else
        {
            ll a = abs(arr[i]-arr[i-1]);
            ll d = abs(arr[i]-arr[i+1]);
            ll b = abs(arr[i]-arr[n-1]);
            ll c  = abs(arr[i]-arr[0]);
            cout << min(a,d) <<  " " << max(b,c) << endl;
        }
        
    }
       

}
