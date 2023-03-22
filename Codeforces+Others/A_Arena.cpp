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
        ll mn = INT_MAX;
        for(ll i=0;i<n;i++)
        {
            cin >> arr[i];
            mn = min(arr[i],mn);
        }
        ll c=0;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]>mn)
            c++;
        }
        cout << c << endl;
    }


}
