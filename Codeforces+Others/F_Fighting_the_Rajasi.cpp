///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
bool cmp1(pair<ll, pair<ll, ll>> a, pair<ll, pair<ll, ll>> b)
{
    if (a.first == b.first)
    {
        return (a.second.first < b.second.first);
    }
    else
        return (a.first > b.first);
}
bool cmp2(pair<ll,ll>a,pair<ll,ll>b)
{
    if (a.first == b.first)
    {
        return (a.second < b.second);
    }
    else
        return (a.first > b.first);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, h, k;
        cin >> n >> h >> k;
        vector<pair<ll, pair<ll, ll>>> v;
        vector<pair<ll,ll>>v2;
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            ll a = y - x;
            auto b = make_pair(x, y);
            if (a>0)
            {
                v.push_back(make_pair(a, b));
            }
            else
            {
                v2.push_back({x,y});
            }
           
        }
        sort(v.begin(), v.end(), cmp1);
        sort(v2.begin(), v2.end(), cmp2);
        ll f = 0;
        for (ll i = 0; i < v.size(); i++)
        {
            ll a = v[i].second.first;
            ll b = v[i].second.second;
            if (h <= a)
            {
                if (k == 0)
                {
                    cout << "N" << endl;
                    f = 1;
                    break;
                }
                k--;
            }
            h = h + (b - a);
        }
        if (f == 0)
        {
            cout << "Y" << endl;
            continue;
        }
        for (ll i = 0; i < v2.size(); i++)
        {
            ll a = v2[i].first;
            ll b = v2[i].second;
            if (h <= a)
            {
                if (k == 0)
                {
                    cout << "N" << endl;
                    f = 1;
                    break;
                }
                k--;
            }
            h = h + (b - a);
        }
       if (f == 0)
        {
            cout << "Y" << endl;
            continue;
        }
       
       

    }
}