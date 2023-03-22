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
        vector<ll>arr;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin >> x;
            arr.push_back(x);
        }
        ll sum=0;
        for(ll i=0;i<n-1;i++)
        {
            ll a=min(arr[i],arr[i+1]);
            ll b=max(arr[i],arr[i+1]);
            if(a*2<b)
            {
                ll c=0;
                ll t=b;
                while(1)
                {
                    cout << t << " " << b << endl;
                    t = (t/2)+1;
                    c++;
                    if(a*2<=t)
                    break; 
                }
                sum = sum+c;
            }
        }
            cout << sum << endl;
    }

}
