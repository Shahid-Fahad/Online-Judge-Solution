///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,f;
    cin >> n >> f;
    vector<pair<ll,pair<ll,ll>>>v;
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin >>  x >> y;
        ll a = min(x,y);
        ll b= min(2*x,y);
        v.push_back({abs(a-b),{b,a}});
    }
    sort(v.begin(),v.end());
    ll s=0;
   
    for(ll i=v.size()-1;i>=0;i--)
    {
        if(f>0)
        {
            s = s + v[i].second.first ;
            f--;
        }
        else
        {
            s = s + (v[i].second.second);
        }
        
    }
    cout << s<< endl;

}
