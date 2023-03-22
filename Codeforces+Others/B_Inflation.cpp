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
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        ll p = arr[0];
        ll ans=0;
        for(ll i=1;i<n;i++)
        {
            ll  x = (arr[i]*100)/k;
            if(((arr[i])*100)%k!=0)
            x++;
           
            if(x>p)
            {
                ans = ans + (x-p);
                p = p + (x-p);
            }
           p = p+arr[i];

          
            
        }
        cout << ans << endl;
    }

}
