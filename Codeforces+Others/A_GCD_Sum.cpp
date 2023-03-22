///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll digsum(ll x)
{
    ll s=0;
    while(x>0)
    {
        s = s+(x%10);
        x = x/10;
    }
    return s;
}
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
        for(ll i=n;;i++)
        {
            ll x=__gcd(i,digsum(i));
            if(x>1)
            {
                cout << i << endl;
                break;
            }
        }
    }

}
