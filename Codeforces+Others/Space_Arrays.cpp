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
        ll arr[n+5];
        ll f=0,s=0;
        map<ll,ll>mp;
        for(ll i=1;i<=n;i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            if(arr[i]>n)
            {
                cout << "Second" << endl;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            sort(arr+1,arr+n+1);
            for(ll i=1;i<=n;i++)
            {
                if(arr[i]>i)
                {
                    s=4;
                    break;
                }
                s = s + abs(i-arr[i]);
            }
            if(s%2==1)
            cout << "First" << endl;
            else
            {
                cout << "Second" << endl;
            }
            
        }

        
    }

}
