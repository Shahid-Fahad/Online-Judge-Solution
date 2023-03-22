///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
bool isprime(ll n)
{
    ll x=sqrt(n);
    if(n==1)
    return false;
    for(ll i=2;i<=x;i++)
    {
        if(n%i==0)
        return false;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     


}
