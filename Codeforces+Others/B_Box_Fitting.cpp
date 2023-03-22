///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        deque<ll> ms;
        ll s = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ms.push_back(x);
        }
        sort(ms.begin(),ms.end());
        ll box=0;
        while (ms.size() > 0)
        {
            box++;
            ll sm=0;
            auto p = --ms.end();
            for (auto it = p;; --it)
            {
                sm = sm+(*it);
                //cout << "TEST " << ms.size() << "  "  << sm << endl;
                if(sm>k)
                {
                    sm = sm-(*it);
                    if(it==ms.begin())
                        break;
                    continue;
                }

                auto it2=it;
                it2++;
                ms.erase(it);
                if(sm==k)
                    break;
                if(ms.size()==0||it==ms.begin())
                break;
                it=it2;
            }
        }
        cout << box << endl;
    }
}
