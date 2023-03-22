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
    for(ll tc=1;tc<=t;tc++)
    {
        ll n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll sz=s.size();
        ll g=0;
        for(ll i=0,j=sz-1;i<sz/2;i++,j--)
        {
            if(s[i]!=s[j])
            g++;
        }
        cout << "Case " << "#" << tc << ": ";
        cout << abs(g-k) << endl;
    }

}
