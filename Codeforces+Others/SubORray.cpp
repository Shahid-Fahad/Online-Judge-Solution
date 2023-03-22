///Bismillahir Rahmanir Rahim
//ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define ff first
#define ss second
ll pref[100005][32];
ll n,ans;
bool ok(ll mid)
{
    ll l = 0, r = mid;
    while (r < n)
    {
        bitset<32> bs(0);
        for (ll i = 0; i < 30; i++)
        {
            ll x = pref[r][i];
            if (l > 0)
                x -= pref[l - 1][i];
            if (x > 0)
                bs[i] = true;
        }
        ll val = bs.to_ullong();
        if (val == ans)
        return true;
        l++, r++;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1, tc = 0;
    cin >> t;
    ll k=0;
    while (t--)
    {
        //tc++;case_(tc);
        cin >> n;
        vector<ll> v(n);
        memset(pref,0,sizeof(pref));
        ans=0;
        k+=n;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            ans |= v[i];
        }
        for (ll i = 0; i < n; i++)
        {
            bitset<32> bs = v[i];
            for (ll j = 0; j < 30; j++)
                if (bs[j])
                    pref[i][j]++;
        }
        for (ll j = 0; j < 30; j++)
        {
            for (ll i = 1; i < n; i++)
            {
                pref[i][j] += pref[i - 1][j];
            }
        }

        ll l = -1, r = n;
        while (r-l > 1)
        {
            ll m = (l + r) / 2;
            if(ok(m))
            r=m;
            else
            l=m;
        }
        cout << ans << " " << r+1  << endl;
    }

}
