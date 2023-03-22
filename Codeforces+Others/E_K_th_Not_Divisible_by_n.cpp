///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,x,i;
       scanf("%lld%lld",&x,&n);
        ll d=0;
        ld k = ceil(double(n)/(x-1))*x;
        ll p=k;
        d = (p/x)-1;
        for(i=k;;i=i+x)
        {
            ll nc = i-1-d;
            
            if(nc==n)
            {
               printf("%lld\n",i-1);
                break;
            }
            else if(nc>n)
            {
                ll k = nc-n;
                printf("%lld\n",i-1-k);
                break;
            }
            d++;
            
        }

    }

}
