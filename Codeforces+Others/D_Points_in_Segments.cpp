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
    for(ll tc=1;tc<=t;tc++)
    {
        ll n,q;
        scanf("%lld%lld",&n,&q);
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            ll x;
            scanf("%lld",&x);
            v.push_back(x);
        }
       printf("Case %lld:\n",tc);
        while(q--)
        {
            ll l,r;
            scanf("%lld%lld",&l,&r);
            ll x = lower_bound(v.begin(),v.end(),l)-v.begin();
            ll y = lower_bound(v.begin(),v.end(),r)-v.begin();
            if(y>n-1||v[y]>r)
            y--;
            printf("%lld\n",y-x+1);


        }
    }

}
