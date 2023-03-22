///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll Pow(ll b, ll p)
{
    ll ans = 1,prans=1;
    for (ll i = 1; i <= p; i++)
    {
        if(ans>(1e18/b))
        return -1;
        ans = ans * b;
    }
    return ans;
}
ll ans(string n, ll x)
{
    ll s = 0;
    for (ll i = 0, j = n.size() - 1; i < n.size(); i++, j--)
    {
        ll k = n[i] - 48;
        ll pw = (Pow(x, j));
        if(pw==-1)
        {
            return -1;
        }
        s = s + (pw*k);
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    ll x;
    cin >> n >> x;
    if(n.size()==1)
    {
        ll k = n[0]-48;
        if(x<k)
        cout << 0 << endl;
        else
        {
            cout << 1 << endl;
        }
        return 0;
        
    }
    ll l = -1, r = 1e18+5;
    while (r - l > 1)
    {
        ll m = (l + r) / 2;
        if(m>x)
        {
            r=m;
            continue;
        }
        ll a = ans(n, m);
        //cout << m << " tt " << a  << " " << x << endl;
        if (a > x||a==-1)
            r = m;
        else
            l = m;
    }
    ll mx = 0;
    for (ll i = 0; i < n.size(); i++)
    {
        ll k = n[i] - 48;
        mx = max(mx, k);
    }
    cout << l - mx << endl;
}