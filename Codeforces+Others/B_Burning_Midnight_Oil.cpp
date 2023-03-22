///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll powr(ll x, ll i)
{
    ll ans=1;
    for(ll j=1;j<=i;j++)
    {
        ans = ans*x;
    }
    return ans;
}
ll lines(ll n,ll k)
{
    
    ll s=n,i=1,t=k;
    while((n/t)>0)
    {
        s = s+(n/t);
        i++;
        t = powr(k,i);  
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n >> k;
    ll l=-1,r=1;
    while(1)
    {
        if(lines(r,k)>=n)
        break;
        r = r*2;
    }
    while(r-l>1)
    {
        ll m = (l+r)/2;
       ll ans = lines(m,k);
       //cout << "m = " << m << "  ans " << ans << endl; 
       if(ans>=n)
       {
           r = m;
       }
       else
       {
           l = m;
       }
       
    }
    cout << r << endl;

}
