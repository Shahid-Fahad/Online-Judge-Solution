///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
bool ok(ll k,ll arr[],ll n,ll cnc)
{
    ll s=0,cn=0;
    for(ll i=1;i<=n;i++)
    {
        s = s+arr[i];
        if(s>=k)
        {
            cn++;
            if(s==k)
            s=0;
            else
            s = arr[i];
        }
    }
    if(s>0)
    cn++;
    //cout << k << " " << cn << endl;
    if(cn<=cnc)
    return true;
    else
    return false;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for(ll tc=1;tc<=t;tc++)
    {
        ll n,k;
        cin >> n >> k;
        ll arr[n+5],s=0;
        ll mx=0;
         arr[0]=0;
        for(ll i=1;i<=n;i++)
        {
            cin >> arr[i];
            s = s+arr[i];
            mx = max(mx,arr[i]);
        }
        ll l=mx-1,r=s+1;
        while(r-l>1)
        {
            ll m = (l+r)/2;
            bool ans = ok(m,arr,n,k);
            if(ans)
            r=m;
            else
            l=m;
        }
        
        cout << "Case " << tc << ": "  << r << endl;


    }

}