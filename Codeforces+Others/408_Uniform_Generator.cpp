///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll seed(ll n, ll st, ll mod)
{
    return ((n + st) % mod);
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll st, mod, i;
    while (cin >> st >> mod)

    {
        set<ll> s;
        vector<ll> v;
        s.insert(0);
        v.push_back(0);
        ll o = 1, f = 0;
        for (i = 0; i < mod; i++)
        {
            ll x = seed(v[i], st, mod);
            v.push_back(x);
            s.insert(x);
           
            if (s.size() == mod)
            {
               
                
                    f = 1;
                    break;
            }

        }
        
        if(f==1)
        {
            printf("%10lld%10lld    Good Choice\n\n", st, mod);
        }
        else
        {
            printf("%10lld%10lld    Bad Choice\n\n", st, mod);
        }
        
        
    }
}
