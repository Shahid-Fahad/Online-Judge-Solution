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
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll q;
    cin >> q;
    while(q--)
    {
        ll x1,x2;
        cin >> x1 >> x2;
        ll i1,i2;
        ll l=-1,r=n;
        while(r-l>1)
        {
            ll m = (r+l)/2;
            if(v[m]<x1)
            l = m;
            else
            {
                r = m;
            }
            
        }
        i1=r;
         l=-1,r=n;
        while(r-l>1)
        {
            ll m = (r+l)/2;
            if(v[m]>x2)
            r = m;
            else
            {
                l = m;
            }
            
        }
        i2=l;
        cout << i2-i1+1 << " ";
 
    }
    cout << endl;
 
}