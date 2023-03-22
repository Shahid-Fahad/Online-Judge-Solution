///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc,t=0;
    cin >> tc;
    while(tc--)
    {
        t++;
        cout << "Case " << t << ": ";
        ll n;
        cin >> n;
        vector<ll>v1;
        vector<pair<ll,ll>>v2;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin >> x;
            v1.push_back(x);
        }
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin >> x;
            v2.push_back({x,v1[i]});
        }
        ll turn=0;
        for(ll i=0;i<v2.size();i++)
        {
           ll a = v2[i].first;
           ll b = v2[i].second;
           ll k = abs(a-b)-1;
           
           turn = turn^k;
        }
        if(!turn)
        {
            cout << "black wins" << endl;
        }
        else
        cout << "white wins" << endl;
    }

}
