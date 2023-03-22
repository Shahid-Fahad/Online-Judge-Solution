///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll n,k;
ll arr[100005];
bool ok(ld x)
{
    ll c=0;
    for(ll i=0;i<n;i++)
    {
        c = c + arr[i]/x;
    }
    if(c>=k)
    return 1;
    else
    return 0;
}
int main()
{
   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    cin >> n >> k;
    for(ll i=0;i<n;i++)
    cin >> arr[i];
    ld l=0,r=100000001;
    for(ll i=0;i<100;i++)
    {
        ld m = (l+r)/2.0;
        if(ok(m))
        l=m;
        else
        r=m;        
    }
    printf("%0.6Lf\n",r); 


}

