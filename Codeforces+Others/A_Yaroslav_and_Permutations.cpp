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
    map<ll,ll>mp;
    ll i;
    for(i=0;i<n;i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    ll mx=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        mx = max(mx,it->second);
    }
    n = n-mx;
    mx--;
    if(mx<=n)
    cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
    }
    


}
