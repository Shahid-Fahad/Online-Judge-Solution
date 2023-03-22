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
        ll x=sqrt(n);
        mx = 1 ;
        for(ll i=2;i<=x;i++)
        {
            if(n%i==0)
            {
                mx = max({n/i,i,mx});
            }
        }
        cout << ((mx%1000000007)*(n%1000000007))%1000000007;
    }

}
