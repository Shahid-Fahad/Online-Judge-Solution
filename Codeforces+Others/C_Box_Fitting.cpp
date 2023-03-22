#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
#define nl "\n"
#define sp " "
#define ss second
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
const ll mod = 1e9 + 7;

int lg2(const int &x) { return 31 - __builtin_clz(x); }
ll bigMod(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
inline ll MOD(ll a) { return (a % mod + mod) % mod; }
inline ll modAdd(ll a, ll b) { return MOD(MOD(a) + MOD(b)); }
inline ll modSub(ll a, ll b) { return MOD(MOD(a) - MOD(b)); }
inline ll modMul(ll a, ll b) { return MOD(MOD(a) * MOD(b)); }
inline ll modInv(ll a) { return bigMod(a, mod - 2); }
inline ll modDiv(ll a, ll b)
{
    a = MOD(a);
    b = modInv(b);
    return (a * b) % mod;
}
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, w;
        cin >> n >> w;
        multiset<ll> v;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.insert(x);
        }
        ll ans = 1, occ = 0;
        while (!v.empty())
        {

            ll have = w - occ;
            auto it = v.lower_bound(have);
            if (it == v.end())
            {
                occ += (*--v.end());
                v.erase(--v.end());
            }
            else
            {
                if (occ + (*it) > w)
                {
                    if(it==v.begin())
                    {
                        ans++;
                        occ=0;
                        continue;
                    }
                    else
                    it--;
                }
                occ += *it;
                v.erase(it);
            }
        }
        cout << ans << nl;
    }
}
