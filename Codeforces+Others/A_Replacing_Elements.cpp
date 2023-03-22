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
        ll arr[n],i;
        vector<ll>v;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i]>k)
            {
                v.push_back(arr[i]);
            }
        }
        if(v.size()==0)
        cout << "YES" << endl;
        else
        {
            sort(arr,arr+n);
            ll x = arr[0] + arr[1];
            if(x<=k)
            cout << "YES" << endl;
            else
            cout << "NO" << endl;
        }
        
    }

}
