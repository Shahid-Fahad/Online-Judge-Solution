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
        ll n, m;
        cin >> n >> m;
        ll i, j;
        char arr[n][m];
        for (i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            for (j = 0; j < m; j++)
            {
                arr[i][j] = x[j];
            }
        }

        ll fo = 0, tom = 0, zf = 0, end = 0;
        pair<ll, ll> fi, li;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (arr[i][j] == '1' && fo == 0)
                {
                    fi = {i, j};
                    fo++;
                }
                if (fo == 1 && arr[i][j] == '1' && zf == 0)
                {
                    li = {i, j};
                    tom++;
                }
                if (fo == 1 && arr[i][j] == '0')
                    zf++;
                if (fo == 1 && arr[i][j] == '1' && zf > 0)
                {
                    end++;
                    break;
                }
            }
            if (fo == 1)
            {
                break;
            }
        }
        ll lr = -1,lc=-1;
        for (i = m - 1; i >= 0; i--)
        {
            for (j = n - 1; j >= 0; j--)
            {
                if (arr[i][j] == '1')
                {
                    lr = i;
                    lc = j;
                    break;
                }
            }
            if (lr > -1)
                break;
        }
       
            //cout << "TEST " << fi.first << " " << lr << " " << fi.second << " " << li.second << endl;
            for (i = fi.first; i <= lr; i++)
            {
                ll to = 0, zc = 0; 
                for (j = fi.second; j <= lc; j++)
                {
                    if (arr[i][j] == '1')
                        to++;
                    else
                    {
                        end++;
                        break;
                    }
                }

                if (to != tom && to > 0)
                {
                    end++;
                    break;
                }
                tom2 = tom2 + to;
                if (end > 0)
                    break;
            }
            if (end > 0 || tom2 <= tom)
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
    }
}