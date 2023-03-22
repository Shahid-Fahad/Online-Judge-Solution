///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll arr[1000006];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i;
        cin >> n;
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        stack<pair<ll, ll>> s1, s2;
        vector<ll> v1, v2;
        for (i = 0; i < n; i++)
        {
            if (s1.size() == 0)
            {
                v1.push_back(-1);
            }
            else if (s1.size() > 0 && s1.top().first < arr[i])
                v1.push_back(s1.top().second);

            else
            {
                while (s1.size() > 0 && s1.top().first >= arr[i])
                {
                    s1.pop();
                }

                if (s1.size() == 0)
                    v1.push_back(-1);
                else
                {
                    v1.push_back(s1.top().second);
                }
            }
            s1.push(make_pair(arr[i], i));
        }
        for (i = n - 1; i >= 0; i--)
        {
            if (s2.size() == 0)
            {
                v2.push_back(n);
            }
            else if (s2.size() > 0 && s2.top().first < arr[i])
                v2.push_back(s2.top().second);

            else
            {
                while (s2.size() > 0 && s2.top().first >= arr[i])
                {
                    s2.pop();
                }

                if (s2.size() == 0)
                    v2.push_back(n);
                else
                {
                    v2.push_back(s2.top().second);
                }
            }
            s2.push(make_pair(arr[i], i));
        }
         reverse(v2.begin(), v2.end());
        ll are[n];
        for (ll i = 0; i < n; i++)
        {
            are[i]= (v2[i]-v1[i]-1)*arr[i];
        }
        sort(are,are+n);
        cout << are[n-1] << endl;
    }
}
