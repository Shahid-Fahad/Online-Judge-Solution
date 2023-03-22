///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<ll> d;
ll c = 0;
void div(ll n)
{
    d.clear();
    ll i, x = sqrt(n);
    for (i = 1; i <= x; i++)
    {
        if ((n % i) == 0)
        {
            if (n / i == i)
                d.push_back(i);
            else
            {
                d.push_back(i);
                d.push_back(n / i);
            }
        }
    }
}
bool prime(ll n)
{
    ll x = sqrt(n);
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    for (ll i = 2; i <= x; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x, c = 0;
    cin >> x;
    ll f=0;
    while (x > 0)
    {
      //  cout << x << endl;
        if (x % 2 == 0)
        {
            cout << c + (x / 2) << endl;
            f=1;
            break;
        }
        div(x);
        sort(d.begin(), d.end());
        ll i = 0;
        for (i = 0; i < d.size(); i++)
        {
            if (prime(d[i]))
            {
                i = d[i];
                break;
            }
        }
        x = x - i;
        c++;
    }
    if(f==0)
    cout << c << endl;
}
