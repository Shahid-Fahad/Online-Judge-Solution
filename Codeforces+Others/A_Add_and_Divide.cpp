///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll chk(ll n, ll x)
{
    ll s=0;
    if(x==1)
    return INT_MAX-1;
    while (n != 0)
    {
        n = n / x;
        s++;
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll ix=x;
        
         if (x > n)
        {
            cout << 1 << endl;
        }
        else
        {
        ll mn = INT_MAX,ans;
            while (1)
            {
                ll k = chk(n, x);
                ans = k + abs(ix-x);
                x++;
                if(ans>mn)
                break;
            else if(ans<mn)
                mn=ans;
            }

            cout << mn << endl;
        }
    }
}
