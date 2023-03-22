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
    for(ll q=1;q<=t;q++)
    {
        ll n,m;
        cin >> n >> m;
        cin.ignore();
        set<string>s1,s2;
        set<string>s;
        while(n--)
        {
            string x;
            getline(cin,x);
            s1.insert(x);
        }
        while(m--)
        {
            string x;
             getline(cin,x);
            s2.insert(x);
        }
        for(auto x:s1)
        {
            for(auto y:s2)
            {
                string k = x+y;
                s.insert(k);
            }
        }
        cout <<"Case " << q << ": " << s.size() << endl;
    }

}