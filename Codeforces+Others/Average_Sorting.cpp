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
        ll n;
        cin >> n;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        if(v.size()==2)
        {
            if(v[0]<v[1])
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            
        }
        else
        {
            ll f=0;
            for(ll i=v.size()-1;i>=2;i--)
            {
                if(i!=v.size()-1&&v[i]==v[i+1])
                {
                    if(v[i]>v[i-1])
                    {
                        v[i]
                    }

                }
                if(v[i]<v[i-1])
                {
                    v[i] = v[i-1];
                }
            }
        }
        

    }

}
