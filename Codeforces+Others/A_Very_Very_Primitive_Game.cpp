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
       
        ll n,k;
        cin >> n >> k;
        ll arr[n+5];
        for(ll i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        ll upl=0,lwl=0,f=0,bs=0;
        while(1)
        {
            ll nc=0;
            for(ll i=0;i<n-1;i++)
            {
                if(arr[i]<arr[i+1])
                {
                    nc++;
                    upl = lwl+1;
                    ll dif = abs(arr[i+1]-arr[i]);
                    arr[i] = arr[i+1];
                    bs = bs+dif;
                    if(k<=bs)
                    {
                        cout << i+1 << endl;
                        f=1;
                        break;
                    }
                    i=-1;
                    break;
                }
            }
           

            if(f==1)
            break;
            if(nc==0)
            {
                cout << "-1" << endl;
                break;
            }
        }
    }

}