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
        ll a, b, qm = 0;
        cin >> a >> b;
        ll ta = a, tb = b;
        string s;
        cin >> s;
        ll k = s.size() / 2;
        ll sz = s.size() - 1;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
                qm++;
        }

        if (qm > 0)
        {
            for (ll i = 0; i < k; i++)
            {
                if (s[i] == '0' || s[sz - i] == '0')
                {
                    if (s[i] == '0' || s[i] == '?')
                    {
                        s[i] = '0';
                        a--;
                    }
                    if (s[sz - i] == '0' || s[sz - i] == '?')
                    {
                        s[sz - i] = '0';
                        a--;
                    }
                }
                else if (s[i] == '1' || s[sz - i] == '1')
                {
                    if (s[i] == '1' || s[i] == '?')
                    {
                        s[i] = '1';
                        b--;
                    }
                    if (s[sz - i] == '1' || s[sz - i] == '?')
                    {
                        s[sz - i] = '1';
                        b--;
                    }
                }
            }
            for (ll i = 0; i < s.size() / 2; i++)
            {
                if (s[i] == '?')
                {
                    if (a >= 2)
                    {
                        if (s[i] == '0' || s[i] == '?')
                        {
                            s[i] = '0';
                            a--;
                        }
                        if (s[sz - i] == '0' || s[sz - i] == '?')
                        {
                            s[sz - i] = '0';
                            a--;
                        }
                    }
                    else if (b >= 2)
                    {
                        if (s[i] == '1' || s[i] == '?')
                        {
                            s[i] = '1';
                            b--;
                        }
                        if (s[sz - i] == '1' || s[sz - i] == '?')
                        {
                            s[sz - i] = '1';
                            b--;
                        }
                    }
                }
            }
            if (s.size() % 2 == 1)
            {
                if (a > b)
                {
                    if(s[k]=='0'||s[k]=='?')
                    s[k] = '0';
                    a--;
                }
                else
                {
                    if(s[k]=='1'||s[k]=='?')
                    s[k] = '1';
                    b--;
                }
            }
        }
        ll zc = 0, oc = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                oc++;
            else if (s[i] == '0')
                zc++;
        }
        string t;
        t = s;
        reverse(t.begin(), t.end());
        if (s == t && ta == zc && tb == oc)
            cout << s << endl;
        else
            cout << -1 << endl;
    }
}
