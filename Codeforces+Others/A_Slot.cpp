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
    ll c=0;
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
        arr[i] = arr[i/2];
        c =  c +arr[i];
    }
   
    for(ll i=0;i<n;i++)
    {
        ll t = abs(arr[i]);
        if(t%2==1)
        {
            ll x;
            if(c>0)
            {
                arr[i]--;
            }
            else if(c<0)
            {
                arr[i]++;
            }
            cout << arr[i] << endl;
        }
        else
        {
            cout << arr[i]/2 << endl;
        }
        
    }


}
