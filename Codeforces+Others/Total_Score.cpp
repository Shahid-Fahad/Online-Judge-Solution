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
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        ll p[k];
        for(ll i=0;i<k;i++)
        cin >> p[i];
        while(n--)
        {
            string s;
            cin >> s;
            ll sm=0;
            for(ll i=0;i<s.size();i++)
            {
                if(s[i]=='1')
                sm = sm + (p[i]);
            }
            cout << sm << endl;
        }
    }

}
