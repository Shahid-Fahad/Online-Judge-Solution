///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    if (k == 1)
    {
        while (n--)
        {
            cout << "a";
        }
        cout << endl;
    }
    else
    {
        string x;
        for (ll i = 1; i <= k; i++)
        {
            x.push_back('a' + (i - 1));
        }
        ll f=1;
        for (ll i=0,j=1; j <= n;j++)
        {
            cout << x[i];
            if(j==k)
            {
                cout << x[i];
            }

        }
    }
}
