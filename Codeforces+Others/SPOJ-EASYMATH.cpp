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
        ll n, m, a, d, k, i, j=1, p, q;
        cin >> n >> m >> a >> d;
        set<ll> s;
        ll arr[10];
        for (i = 0; i < 5; i++)
        {
            if (i > 0)
                k = a + (i * d);
            else
            {
                k = a;
            }
            arr[i] = k;
            j = j*k;
           
        }
        if(j>=n&&j<=m)
        s.insert(j);
       
        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j < 5; j++)
            {
                ll x = arr[i] * arr[j];
                if (x >= n && x <= m)
                    s.insert(x);
               
            }
        }
       
        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j < 5; j++)
            {
                for (p = j + 1; p < 5; p++)
                {
                    ll x = arr[i] * arr[j] * arr[p];
                    if (x >= n && x <= m)
                        s.insert(x);
                        
                }
            }
        }
        
        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j < 5; j++)
            {
                for (p = j + 1; p < 5; p++)
                {
                    for (q = p + 1; q < 5; q++)
                    {
                        ll x = arr[i] * arr[j] * arr[p] * arr[q];
                        if (x >= n && x <= m)
                            s.insert(x);
                        
                    }
                }
            }
        }
        ll ans=0,sum=0;
        for(auto it=s.begin();it!=s.end();it++)
        {
            cout << *it << endl;
            double x = ceil((n+0.0)/(*it+0.0));
           double y = floor((m+0.0)/(*it+0.0));
           ll u = y-x+1;
           sum = sum+u;
        }
        cout << sum << endl;
       for(i=0;i<5;i++)
       {
           double x = ceil((n+0.0)/(arr[i]+0.0));
           double y = floor((m+0.0)/(arr[i]+0.0));
           ll u = y-x+1;
           ans = ans+u;
           cout << "ans " << " " << arr[i ] << " " << ans << endl;

       }
       cout << "fa " << ans << endl;
    
        k  = (m-n+1)-(ans-sum);

        cout << k << endl;
    }
}
