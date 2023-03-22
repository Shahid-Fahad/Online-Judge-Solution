///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x;
        y = x;
        ll f = 0, b = 0;
        char o = x[0];
        char c = x[x.size()-1];
        map<ll, ll> mp;
        for (ll i = 0; i < x.size(); i++)
        {
            mp[x[i]]++;
        }
        if (mp.size() == 2)
        {
            for (ll i = 0; i < x.size(); i++)
            {
                if (x[i] == o)
                    x[i] = '(';
                else
                {
                    x[i] = ')';
                }
            }
        }
        else
        {
            for (ll i = 0; i < x.size(); i++)
            {
                if (x[i] == o)
                {
                    x[i] = '(';
                    y[i] = '(';
                }
                else if (x[i] == c)
                {
                    x[i] = ')';
                    y[i] = ')';
                }
                else
                {
                    x[i] = '(';
                    y[i] = ')';
                }
            }
        }
         b=0;
        for (ll i = 0; i < x.size(); i++)
        {
            b=0;
            if (x[i] == '(')
            {
                for (ll j = 0; j < x.size(); j++)
                {
                    if (x[j] == ')')
                    {
                        x.erase(x.begin() + j, x.begin() + j + 1);
                        x.erase(x.begin() + i, x.begin() + i + 1);
                        i = -1;
                        b=1;
                        break;
                    }
                }
            }
            if(b==0)
            break;
            b=0;
        }
        if (mp.size() == 3)
        {
            for (ll i = 0; i < y.size(); i++)
            {
                b=0;
                if (y[i] == '(')
                {
                    for (ll j = 0; j < y.size(); j++)
                    {
                        if (y[j] == ')')
                        {
                            y.erase(y.begin() + j, y.begin() + j + 1);
                            y.erase(y.begin() + i, y.begin() + i + 1);
                            i = -1;
                            b=1;
                            break;
                        }
                    }
                }
                if(b==0)
                break;
                b=0;
            }
        }
        if(mp.size()==2)
        {
            if(x.size()==0)
            cout << "YES" << endl;
            else
            cout << "NO" << endl;
        }
        else
        {
            
            if(x.size()==0||y.size()==0)
            cout << "YES" << endl;
            else
            cout << "NO" << endl;
        }
        
    }
}
