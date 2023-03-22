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
    cin >> n >> k;
    vector<ll>v1,v2;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin >> x;
        v1.push_back(x);
    }
    for(ll i=0;i<k;i++)
    {
       ll  x;
        cin >> x;
        v2.push_back(x);
    }
    ll c=0;
    for(ll i=0;i<v1.size();i++)
    {
        if(v2.size()==0)
        break;
        if(v1[i]<=v2[0])
        {
            c++;
            v2.erase(v2.begin()+0);
        }
        

    }
    cout << c << endl;

}
