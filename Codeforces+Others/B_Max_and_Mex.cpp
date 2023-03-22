///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll mex(set<ll> s)
{
    ll c=0;
    for(auto it:s)
    {
        if(it!=c)
        return c;
        c++;
    }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        set<ll>s;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin >> x;
            s.insert(x);
        }
        ll sz=s.size();
        ll f=0;
        for(ll i=1;i<=k;i++)
        {
            ll max = (*(--s.end()));
            ll mx = mex(s);
            ll x = (max + mx)/2;
            if(max<mx+1)
            {
                cout << s.size() + (k-i+1) << endl;
                f=1;
                break;
            }
            if((max+mex(s))%2==1)
            x++;
            s.insert(x);
            if(s.size()==sz)
            {
                cout << s.size() << endl;
                f=1;
                break;
            }
            sz = s.size();
        }
        if(f==0)
        {
            cout << s.size() << endl;
        }

    }

}
