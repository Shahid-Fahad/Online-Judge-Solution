#pragma GCC optimize("Ofast","inline","-ffast-math")
#pragma GCC target("avx,avx2,fma,mmx,sse2,sse3,sse4")
#pragma GCC optimization("unroll-loops")
///Bismillahir Rahmanir Rahim
//ShzFahad
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ld long double
#define pb push_back
#define ff first
#define ss second
#define case_(tc) cout << "Case " << tc << ": ";
#define mem(a, b) memset(a, b, sizeof(a))
#define all(qz) qz.begin(), qz.end()
#define rall(qz) qz.rbegin(), qz.rend()
#define ll int


ll n, k;
vector<pair<char, ll>> v, v2;
vector<ll>vx[27];
string s, per;
ll dp[1050000];
ll cost(ll tp)
{
    char c = per[tp];
    ll cl=0;
    for (ll j = 0; j < n; j++)
    {
        if (v[j].ff == c && v[j].ss == 0)
        {
            cl++;
            while (j < n && ((v[j].ff == c) || (v[j].ss == 1)))
            {
                
                v[j].ss = 1;
                j++;
            }
        }
    }
    return cl;
}
ll f(ll mask, ll us)
{
    if (us == per.size())
    {
        return 0;
    }
    if (dp[mask] != 0)
        return dp[mask];
    ll ans = 1e9;
    for (ll j = 0; j < per.size(); j++)
    {
        ll ffx = mask & (1 << j);
        if (!ffx)
        {
            mask |= (1 << j);
            ans = min(ans,cost(j)+f(mask, us + 1));
            for(ll k=0;k<vx[per[j]-'a'].size();k++)
            {
                v[vx[per[j]-'a'][k]].ss=0;
            }
            mask ^= (1<<j);
        }
    }
    return dp[mask]=ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1, tc = 0;
    //cin >> t;
    while (t--)
    {
        //tc++;case_(tc);  
        cin >> n >> k;
        cin >> s;
        set<char> st;
        for (ll i = 0; i < n; i++)
        {
            vx[s[i]-'a'].pb(i);
            st.insert(s[i]);
            v.pb({s[i], 0});
        }
        for (auto it : st)
        {
            per.pb(it);
        }
        cout << f(0,0) << endl;
    }
}
