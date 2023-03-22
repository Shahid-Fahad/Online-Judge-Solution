///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll>v,v2,v3,v4;
    ll  y=0;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin >> x;
        v3.push_back(x);
        x = x*x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    sort(v3.rbegin(),v3.rend());
    ll z=0;
    for(ll i=0;i<v.size();i++)
    {   
        z = z+v3[i];
        v4.push_back(z);
        y = y+v[i];
        v2.push_back(y);
    }
    ll s=0;
    for(ll i=0;i<v.size()-1;i++)
    {
        ll k = v[i]*(n-i-1);
        
        ll x = k+(v2[n-1]-v2[i]);
        ll f = (2*v3[i]);
        f = f * (v4[n-1]-v4[i]);
        
        s = s+(x-f);
        
    }
    cout << s << endl;



}
