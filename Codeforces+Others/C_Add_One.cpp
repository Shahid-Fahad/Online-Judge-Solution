///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    ll mod=1e9+7;
    while(t--)
    {
        string x;
        ll n;
        cin >> x >> n;
        string s;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=0;j<x.size();j++)
            {
                ll k = x[j]-'0';
                k++;
                string t = to_string(k);
                s =  s+t;
            }
            ll tmp = stoi(s);
            tmp = tmp%mod;
            x = to_string(tmp);
            s.clear();
        }
        cout << x.size() << endl;
    }

}
