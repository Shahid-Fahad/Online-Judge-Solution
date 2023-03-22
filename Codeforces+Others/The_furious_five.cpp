///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll val(ll x)
{
    ll c=0;
    while(x)
    {
        c  = c+ (x/5);
        x = x/5;
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll c=0,i,f=0;
       ll low=1,hi=1000000000000000000,mid;
     
        while(low<=hi)
        {
            ll mid = (low+hi)/2;
            ll ans = val(mid);
            if(ans<x)
            {
                low = mid+1;
            }
            else if(ans>x)
            {
                hi = mid-1;

            }
            else
            {
                for(ll i = mid;i>=1;i--)
                {
                    ll k = val(i);
                    if(k==x)
                    mid = i;
                    else
                    {
                        break;
                    }
                    

                }
               
                cout << mid << endl;
                f=1;
                break;
            }
            


        }
        if(f==0)
        {
           
            cout << low << endl;
        }

        
    }
    

}
