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

        ll l=-1,r=1;
        while(1)
        {
            ll ans = (r/n)*(n-1);
            if(ans>=k)
            break;
            r = r*2;
        }
       // cout << "hello" << endl;
        while(r-l>1)
        {
            ll m = (l+r)/2;
            ll ans = (m/n)*(n-1);
            if(ans>=k)
            r=m;
            else
            {
                l = m;
            }
            
        }
        ll ans = (r/n)*(n-1)-k;
           cout << r-ans-1 << endl;
    }

}
