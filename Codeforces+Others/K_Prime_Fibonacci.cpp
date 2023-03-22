///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll fib[55];
ll prime[55];
bool isprime(ll n)
{
    if(n<=1)
    return false;
    ll k = sqrt(n);
    for(ll i=2;i<=k;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll t;
    fib[1]=0;
    fib[2]=1;
    for(ll i=3;i<=50;i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }
    for(ll i=1;i<=50;i++)
    {
        if(isprime(fib[i]))
        {
            prime[i]=1;
        }
        else
        prime[i]=0;
    }
    scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        if(prime[n])
        printf("prime\n");
        else
        printf("not prime\n");
    }

}
