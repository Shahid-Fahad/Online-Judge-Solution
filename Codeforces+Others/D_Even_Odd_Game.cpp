///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v1, v2;
        ll res=0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
             v1.push_back(x);
        }
        sort(v1.begin(), v1.end());
        reverse(v1.begin(), v1.end());
        ll t=1;
        for(ll i=0;i<v1.size();i++)
        {
            if(t==1)
            {
                if(v1[i]%2==0)
                res = res+v1[i];
                t=2;
            }
            else
            {
                 if(v1[i]%2==1)
                res = res-v1[i];
                t=1;
            }
            
        }
        if(res>0)
        cout << "Alice" << endl;
        else if(res<0)
        cout << "Bob" << endl;
        else
        {
            cout << "Tie" << endl;
        }
        
       
}
}
