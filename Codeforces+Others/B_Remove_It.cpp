///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n>> k;
     vector<ll>v;
    while(n--)
    {
        ll x;
        cin >> x;
        if(x==k)
        continue;
        else
        {
            v.push_back(x);
        }
        
    }
    for(ll i=0;i<v.size();i++)
    cout << v[i] << " ";
    cout << endl;

}
