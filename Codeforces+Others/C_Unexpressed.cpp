///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll Pow(ll b, ll p)
{
    ll ans = 1;
    for (ll i = 1; i <= p; i++)
    {
        ans = ans * b;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll c = 0;
    ll i, j;
   ll f=0;
   set<ll>s;
    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= n; j++)
        {
            ll k = Pow(i, j);
            //cout << "c  "  << " " << i << " " << j << " "<< k << endl;
            if (k<=n)
            {
                s.insert(k);
            }
            else
            {
                if(j==2)
                f=1;
                //cout << "final " << c << endl;
                break;
            }
        }
            if(f==1)
            break;
    }
    cout << n-s.size() << endl;
}
