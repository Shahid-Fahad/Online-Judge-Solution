///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t,q;
    cin >> n >> t >> q;
    string s1,s2;
    cin >> s1 >> s2;
    while(q--)
    {
        ll l,r;
        cin >> l >> r;
        if(s2.size()>s1.size())
        {
            cout << 0 << endl;
            continue;
        }
        l--;
        string x = s1.substr(l,(r-l));

        ll k = x.size()-s2.size();
        ll c=0;
        if(k>=0)
        {
            for(ll i=0; i<=k; i++)
            {
                string s3 = x.substr(i,s2.size());
                if(s3==s2)
                    c++;
            }
        }
        cout << c << endl;
    }

}
