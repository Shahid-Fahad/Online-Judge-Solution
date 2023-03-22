///Bishmillahir Rahmanir Raheem
//sajeedreefy
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;
#define pb push_back
#define pf push_front
#define ull unsigned long long
#define fr0(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define ff first
#define ss second
#define sp " "
#define debug cout << "dhukse ekhane " << endl;
#define brok(i)    \
    {              \
        cout << i; \
        continue;  \
    }
inline ll MOD(ll a)
{
    return (a % mod + mod) % mod;
}
inline ll modAdd(ll a, ll b) { return MOD(MOD(a) + MOD(b)); }
inline ll modSub(ll a, ll b) { return MOD(MOD(a) - MOD(b)); }
inline ll modMul(ll a, ll b) { return MOD(MOD(a) * MOD(b)); }
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
ll dx[] = {-1, 1, 0, 0};
ll dy[] = {0, 0, -1, 1};
//ll dx[8]={-1,1,0,0,-1,-1,1,1};
//ll dy[8]={0,0,-1,1,-1,1,-1,1};
bool isprime(ll x)
{
    if (x < 2)
        return false;
    if (x < 4)
        return true;
    if (!(x & 1))
        return false;
    for (int i = 3; i * i <= x; i += 2)
        if (x % i == 0)
            return false;
    return true;
}

string toBinary(ll n)
{
    string r;
    while (n != 0)
    {
        r = (n % 2 == 0 ? "0" : "1") + r;
        n /= 2;
    }
    return r;
}
ll bi_ex(ll x, ll n)
{
    ll pro = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            pro = ((pro % mod) * (x % mod)) % mod;
        x = ((x % mod) * (x % mod)) % mod;
        n >>= 1;
    }
    return pro % mod;
}
ll powr(ll n, ll x)
{
    if (x == 0)
        return 1;
    if (!(x & 1))
        return powr(n * n, x >> 1);
    else
        return n * powr(n * n, (x - 1) >> 1);
}
struct AB
{
    pair<ll, ll> pr;
};
bool comp(AB a, AB b)
{
    return a.pr.ff < b.pr.ff;
}
signed main()
{
    fastIO();
    //    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    ll t = 1, mn, q, p, c, i, j, m, ans, a, b, d, x, y, k, n, mx;
    //scanf("%lld",&t);
    c = 0;
    //cin >> t
    while (cin >> n >> m)
    {
        vector<AB> vec(m);
        j = 0;
        fr0(i, m)
        {
            cin >> x >> y;
            if (x == y)
                continue;
            if (!(x & 1))
                x--;
            if (!(y & 1))
                y++;
            vec[j].pr = {x, y};
            j++;
        }
        sort(vec.begin(), vec.begin() + j, comp);
        x = 1;
        bool ff = false;
        vector<pair<ll, ll>> vv;
        fr0(i, j)
        {
            if (vec[i].pr.ff > x)
            {
                ff = true;
                vv.pb({x, vec[i].pr.ff});
            }
            x = max(x, vec[i].pr.ss);
        }
        if (x <= n)
        {
            vv.pb({x, n + 1});
        }
        if (!vv.size())
            cout << "Sheldon ate it all !!!" << endl;
        else
        {
            for (auto it : vv)
                cout << it.ff << sp << it.ss << endl;
        }
    }
    return 0;
}