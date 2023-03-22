///Bismillahir Rahmanir Rahim
//ShzFahad
#include<stdio.h>
#define ll long long int
ll phi[1000005];
ll ans[1000005];
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int i,j;
    ll t=1;
    //cin >> t;
    for( i=1;i<=1000005;i++)
    phi[i]=i;
    for(i=2;i<=1000005;i++)
    {
        if(phi[i]==i)
        {
            for(j=i;j<=1000005;j=j+i)
            {
                phi[j]*=(i-1);
                phi[j]/=i;
            }
        }
    }
    ans[2]=1;
    for( i=3;i<=1000005;i++)
    ans[i]=ans[i-1]+phi[i];
    while(1)
    {
        ll n;
        scanf("%lld",&n);
        if(n==0)
        break;
        printf("%lld\n",ans[n]);
    } 
}
