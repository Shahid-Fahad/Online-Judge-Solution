///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k;
    cin >> k;
    string s;
    cin >> s;
    map<char, ll> mp;
    ll f=0;
    for (ll i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    string ans= "";
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second % k != 0)
        {
            f = 1;
            break;
        }
        ans = ans + it->first;
    }

    if (f == 0)
    {
        ll p = s.size()/k;
        for(ll i=1;i<=p;i++)
        cout << ans;
        cout << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

}
