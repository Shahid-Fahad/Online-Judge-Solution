///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll ncr(ll n, ll r)
{
    ll p=1,k=1;
    if(r!=0)
    {
        while(r)
        {
            p = p*n;
            k = k*r;

            ll x = __gcd(p,k);

            p = p/x;
            k = k/x;

            n--;
            r--;
        }
    }
    return p;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,r;
    while(cin >> n >> r)
    {
        if(n==0&&r==0)
        break;
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,ncr(n,r));
    }

}
