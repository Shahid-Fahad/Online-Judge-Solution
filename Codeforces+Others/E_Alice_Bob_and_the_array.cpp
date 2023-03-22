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
    ll tc = 0;
    while (t--)
    {
        ll n;
        cin >> n;
        tc++;
        cout << "Case " << tc << ": ";
        vector<ll> v;
        ll arr[n + 5];
        deque<ll> d;
        ll s = INT_MIN, nc = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] <= 0)
            {
                s = max(s, arr[i]);
                nc++;
            }
        }

        if (nc == n)
        {
            cout << s << " " << 0 << endl;
            continue;
        }

        ll pi, pj;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                pi = i;
                break;
            }
        }
        for (ll j = n - 1; j >= 0; j--)
        {
            if (arr[j] > 0)
            {
                pj = j;
                break;
            }
        }

        s = 0;
        ll mc = 0, fc = 0;
        for (ll i = pi; i < pj; i++)
        {

            if (arr[i] > 0 && arr[i + 1] > 0)
            {
                s = s + arr[i];
            }
            else
            {
                ll fx=0;
                s = s+arr[i];
                for(ll j=i+1;j<=pj;j++)
                {
                    if(arr[j]<0)
                    fx++;
                    if(arr[j]>0)
                    {
                        i=j-1;
                        if(fx>0)
                        mc++;
                        break;
                    }
                }
            }
        }
        cout << s+arr[pj] << " " << mc << endl;
    }
}
