///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
string ok(string t)
{
    ll hf = 0;
    for (ll j = 0; j < t.size(); j++)
    {
        if (t[j] != '1' && t[j] != '2' && t[j] != '5' && t[j] != '8' && t[j] != '0')
        {
            hf = 1;
            break;
        }
    }
    if (hf == 0)
    {
        for (ll j = 0; j < t.size(); j++)
        {
            if (t[j] == '5')
                t[j] = '2';
            else if (t[j] == '2')
                t[j] = '5';
        }
        return t;
    }
    return "-1";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll h, m;
        cin >> h >> m;
        string t;
        cin >> t;
        string h1, m1;
        ll indf = 0;
        for (ll i = 0; i < t.size(); i++)
        {
            if (indf == 0)
                h1 = h1 + t[i];
            else
                m1 = m1 + t[i];
            if (t[i] == ':')
                indf = 1;
        }
        ll hn = stoi(h1);
        ll cc = 0, br = 0;
        string ansh, ansm;
        for (ll i = hn; i <= h; i++)
        {
            if (i == h)
            {
                cout << "00:00" << endl;
            }
            string t = to_string(i);
            if (t.size() == 1)
                t = t + '0';
            t = ok(t);
            ll num = stoi(t);
            if (num < h)
            {
                ansh = to_string(num);
            }
            if (t == "-1")
                continue;
            else
            {
                if (i == hn)
                {
                    ll mn = stoi(m1);
                    for (ll j = mn; j <=m; j++)
                    {
                        if(j==m)
                        j=0;
                        string mt = to_string(j);
                        if (mt.size() == 1)
                            mt = mt + '0';
                        mt = ok(mt);
                        ll num = stoi(mt);
                        if (num <m)
                        {
                            cout << i << ":" << j << endl;
                            br=1;
                            break;
                        }
                    }
                }
                else
                {
                    cout << i << ":" << "00" << endl;
                    br=1;
                    break;
                }
                
            }
            if(br==1)
            break;
        }
    }
}