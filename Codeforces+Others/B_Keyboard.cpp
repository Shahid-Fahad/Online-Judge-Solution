///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, x;
    cin >> n >> m >> x;
    char arr[n + 5][m + 5];
    map<char, ll> mp;
    ll mnj = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (ll j = 0; j < s.size(); j++)
        {
            arr[i][j] = s[j];
            mp[s[j]]++;
            if (s[j] == 'S')
                mnj = min(mnj, j);
        }
    }

    ll d;
    cin >> d;
    string str;
    cin >> str;
    ll f = 0, cnt = 0;
    set<char> st;
    map<char, ll> mp2;
    for (ll i = 0; i < str.size(); i++)
    {
        if (mp[str[i]] == 0 && mp[str[i]+32]==0)
        {
            cout << "-1" << endl;
            f = 1;
            break;
        }
        if (str[i] >= 65 && str[i] <= 90)
        {
            mp2[str[i]]++;
        }
    }
    if(f==1)
    return 0;
    for (auto it : mp2)
    {
        char ml = it.first;
        if (ml >= 65 && ml <= 90)
        {
            char k = ml + 32;
            if (mp[k] == 0 || mp['S'] == 0)
            {
                cout << "-1" << endl;
                f = 1;
                break;
            }
            ll mn = INT_MAX, indc, indr;
            vector<pair<ll, ll>> vp;
            ll fc = 0;
            for (ll v = 0; v < n; v++)
            {
                for (ll z = 0; z < m; z++)
                {

                    if (arr[v][z] == k)
                    {
                        vp.push_back({v, z});
                    }
                }
            }
            ll v1 = INT_MAX, v2 = INT_MAX;
            for (ll v = 0; v < n; v++)
            {
                for (ll z = 0; z < m; z++)
                {
                    if (arr[v][z] == 'S')
                    {
                        for (ll pr = 0; pr < vp.size(); pr++)
                        {
                            indr = vp[pr].first;
                            indc = vp[pr].second;
                            ll a = abs((indr + 1) - (v + 1));
                            ll b = abs((indc + 1) - (z + 1));
                            ll ans = sqrt((a * a) + (b * b));
                            ll k = (a * a) + (b * b);
                            if ((ans * ans) != k)
                                ans++;
                            mn = min(ans, mn);
                        }
                    }
                }
            }
            if (mn > x)
            {
                cnt = cnt + (it.second);
            }
        }
        else
        {
            if (mp[ml] == 0)
            {
                cout << "-1" << endl;
                f = 1;
                break;
            }
        }
    }
    if (f == 0)
        cout << cnt << endl;
}