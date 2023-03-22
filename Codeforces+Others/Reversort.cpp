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
    ll tc=0;
    while(t--)
    {
        tc++;
        ll n;
        cin >> n;
        ll arr[n+5];
        for(ll i=1;i<=n;i++)
        cin >> arr[i];
        ll s=0;
        for(ll i=1;i<n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                if(arr[j]==i)
                {
                    reverse(arr+i,arr+j+1);
                    s = s+abs(j-i)+1;
                    break;
                }
            }
                
        }
        cout << "Case #" << tc << ": " << s <<endl;


    }

}
