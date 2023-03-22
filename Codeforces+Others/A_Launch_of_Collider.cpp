///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll f=0,ans=INT_MAX;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin >> arr[i];
    for(ll i=0;i<s.size()-1;i++)
    {
        if(s[i]=='R'&&s[i+1]=='L')
        {
            ll x = abs(arr[i]-arr[i+1])/2;
            ans = min(x,ans);
            f=1;
        }
    }
    if(f==0)
    cout << -1 << endl;
    else
    {
        cout << ans << endl;
    }
    


}
