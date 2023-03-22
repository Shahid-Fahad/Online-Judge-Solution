///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll pos(string s, ll n, ll m)
{
    ll fci, lci;
    char fc = 'Y';
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] != '?')
        {
            fc = s[i];
            fci = i;
            break;
        }
    }
    if (fc == 'Y')
    {
        return 0;
    }
    char lc;
    for (ll i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] != '?')
        {
            lc = s[i];
            lci = i;
            break;
        }
    }

    for (ll i = 0; i < fci; i++)
    {
        s[i] = fc;
    }
    for (ll i = s.size() - 1; i > lci; i--)
    {

        s[i] = lc;
    }
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            if (s[i - 1] == s[i + 1])
            {
                s[i] = s[i + 1];
            }
            else
            {
                if (s[i - 1] == 'J')
                    s[i] = 'J';
                else if (s[i - 1] == 'C')
                    s[i] = 'C';
                else if (s[i + 1] == 'J')
                    s[i] = 'J';
                else if (s[i + 1] == 'C')
                    s[i] = 'C';
            }
        }
    }

    ll sum = 0;

    for (ll i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'C' && s[i + 1] == 'J')
            sum = sum + n;
        else if (s[i] == 'J' && s[i + 1] == 'C')
            sum = sum + m;
    }
    return sum;
}
ll neg(string s, ll n, ll m)
{
    ll fci, lci;
    char fc = 'Y';
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] != '?')
        {
            fc = s[i];
            fci = i;
            break;
        }
    }
    char lc;
    for (ll i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] != '?')
        {
            lc = s[i];
            lci = i;
            break;
        }
    }

    if (n < m)
    {
        if (fci % 2 == 1)
            s[0] = 'C';
        for (ll i = fci - 1; i >= 0; i = i - 2)
        {
            if (i - 1 >= 0)
                s[i - 1] = 'C';
            s[i] = 'J';
        }
        if (lci % 2 == 1)
            s[s.size() - 1] = 'J';
        for (ll i = lci + 1; i < s.size(); i = i + 2)
        {
            s[i] = 'C';
            if (i + 1 < s.size())
                s[i + 1] = 'J';
        }
        //
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                if (s[i - 1] == s[i + 1])
                {
                    if (s[i - 1] == 'J')
                        s[i] = 'C';
                    else
                        s[i] = 'J';
                }
                else
                {
                    s[i] = 'C';
                }
            }
        }
    }
    else
    {
        if (fci % 2 == 1)
            s[0] = 'J';
        for (ll i = fci - 1; i >= 0; i = i - 2)
        {
            s[i - 1] = 'J';
            s[i] = 'C';
        }
        if (lci % 2 == 1)
            s[s.size() - 1] = 'C';
        for (ll i = lci + 1; i < s.size(); i = i + 2)
        {
            s[i] = 'J';
            s[i + 1] = 'C';
        }
        //
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                if (s[i - 1] == s[i + 1])
                {
                    if (s[i - 1] == 'J')
                        s[i] = 'C';
                    else
                        s[i] = 'J';
                }
                else
                {
                    if (n < m)
                    {
                        s[i] = 'J';
                    }
                    else
                    {
                        s[i] = 'C';
                    }
                }
            }
        }
    }
    ll sum = 0;

    for (ll i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'C' && s[i + 1] == 'J')
            sum = sum + n;
        else if (s[i] == 'J' && s[i + 1] == 'C')
            sum = sum + m;
    }
    cout << s << endl;
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    ll tc = 0;
    while (t--)
    {
        tc++;
        ll n, m;
        string s;
        cin >> n >> m >> s;
        ll sum;
        if (n > 0 && m > 0)
        {
            sum = pos(s, n, m);
        }
        else
        {
            sum = neg(s, n, m);
        }
       
        cout << "Case #" << tc << ": " << sum << endl;
    }
}
