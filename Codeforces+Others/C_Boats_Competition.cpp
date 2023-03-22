///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll arr[101]={0};
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            arr[x]++;
        }
        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        sort(v.begin(),v.end());
        ll lw = v[0]+v[1];
        ll hi = v[n-1]+v[n-2];
        ll mans=0;
        for(ll i=lw;i<=hi;i++)
        {
            ll ans=0;
            for(ll j=1;j<i;j++)
            {
               
                ll x = j , y = i-j;
                if(x<y)
                 ans = ans + min(arr[x],arr[y]);
                else if(x==y)
                ans = ans + arr[x]/2;
            }
            mans = max(mans,ans);
        }
        cout << mans << endl;
    }
}
