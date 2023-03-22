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
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    ll dol = 0;
   
    ll h=0,en=0;
    for(ll i=0;i<n;i++)
    {
        if(h<arr[i])
        {
            if(i==n-1&&en>0)
            continue;
            ll k = arr[i]-h;
            dol = dol + k;
            h = arr[i];
        }
        else
        {
            en = en + (h-arr[i]);
        }
        
    }
    cout << dol << endl;

}
