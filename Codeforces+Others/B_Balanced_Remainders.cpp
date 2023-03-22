///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while(tc--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll z=0,o=0,t=0;
        for(ll i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i]%3==0)
            z++;
            else if(arr[i]%3==1)
            o++;
            else
            {
                t++;
            }
            
        }
        ll ans=0;
        if(z>t&&z>o)
        {
            ll d1 = abs(o-(n/3))*1;
            ll d2 =abs(t-(n/3))*2;
            ans = d1+d2;

        }
        else if(z<t&&o<t)
        {
            ll d1 = abs((n/3)-z)*1;
            ll d2 = abs(o-(n/3))*2;
           // cout << d1 << " " << d2 << endl;
            ans = d1+d2;
            
        }
        else if(o>t&&o>z)
        {
            ll d1 = abs((n/3)-z)*2;
            ll d2 = abs((n/3)-t)*1;
            ans = d1+d2;
        }
        cout << ans << endl;
        

    }

}
