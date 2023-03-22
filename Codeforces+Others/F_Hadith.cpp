///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t;
    cin >> n >> t;
    ll i,j;
    vector<ll>v;
    for(i=0;i<n;i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll sum=0,mx=0,c=0;
    for(i=v.size()-1;i>=0;i--)
    {
        sum = sum+v[i];
        if(sum<=t)
        c++;
        else
        {
            if(c>mx)
            mx = c;
            c=0;
            sum =v[i];
        }
        
    }
        cout << mx << endl;

}
