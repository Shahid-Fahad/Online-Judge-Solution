///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q,k;
    cin >> n >> q >> k;
    ll arr[n+5];
    for(ll i=1;i<=n;i++)
    cin >> arr[i];

        ll df=0,ns=0;
        ll arr2[n+5],i;
        for(ll i=1;i<=n;i++)
        {
            if(i==n)
            {
                ll d1= abs(arr[i]-arr[i-1])-1;
                ll d2 = abs(k-arr[n]);

                arr2[n] = d1+d2;

            }
            else
            {
                
                ll d1= abs(arr[i]-arr[i-1])-1;
                if(i==1)
                d1 =  abs(arr[i]-0)-1;
                ll d2= abs(arr[i]-arr[i+1])-1;
                arr2[i] = d1+d2;
            }

        }
        
         
    for(ll i=2;i<=n;i++)
    {
        arr2[i] = arr2[i] + arr2[i-1];
    }
    while(q--)
    {
        ll l,r;
        cin >> l >> r;
        ll d1 = arr[r-1];
        ll d2 = abs(k-arr[r])-1;

        cout << d1+d2 << endl;


    }

}
