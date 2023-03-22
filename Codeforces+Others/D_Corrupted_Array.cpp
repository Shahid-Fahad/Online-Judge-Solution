///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        
        vector<ll>v; 
        for (ll i = 0; i < n + 2; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll tar = v[v.size()-1];
        ll s=0;
        for(ll i=0;i<v.size()-1;i++)
        {
            s = s+v[i];
        }
        ll f=0,ind;
        for(ll i=0;i<v.size()-1;i++)
        {
            ll k=s-v[i];
            if(k==v[i]||k==tar)
            {
                ind=i;
                f=1;
                break;
            }
        }
        if(f==1)
        {
            for(ll i=0;i<v.size()-1;i++)
            {
                if(i==ind)
                continue;
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
