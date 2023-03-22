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
    vector<ll>v,v2;
    while(n--)
    {
        ll a,b,f=0;
        cin >>  a  >> b;
        if(a!=b)
        {
            cout << "rated" << endl;
            return 0;
        }
        v.push_back(a);
        v2.push_back(a);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(ll i=0;i<v.size();i++)
    {
        if(v[i]!=v2[i])
        {
            cout << "unrated" << endl;
            return 0;
        }
    }
    cout << "maybe" << endl;

}
