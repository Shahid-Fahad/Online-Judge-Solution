#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
ll row[4] = {1, 0, 0, -1};
ll col[4] = {0, -1, 1, 0};
 
const int jumbo = 1e5 + 5;
const int LOG= 22;
 
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
 
bool is_prime(ll n)
{
    if (n % 2 == 0)
        return false;
    if (n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
 
    return true;
}
 
ll power(ll x, ll y)
{
    ll temp;
    if (y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}
 
ll BigMod(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
 
ll pankha(ll n, ll x)
{
    if (n % x == 0)
        return (n / x);
    else
        return ((n / x) + 1);
}
 
ll LIS(vector<ll> const &a)
{
    ll n = a.size();
    const ll INF = 1e9 + 5;
    vector<ll> d(n + 1, INF);
    d[0] = -INF;
 
    for (ll i = 0; i < n; i++)
    {
        ll j = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if (d[j - 1] <= a[i] && a[i] <= d[j]) // modified
            d[j] = a[i];
    }
 
    ll ans = 0;
    for (int i = 0; i <= n; i++)
    {
        if (d[i] < INF)
            ans = i;
    }
    return ans;
}
 
 
void solve()
{
    ll n, m;
    cin>>n>>m;
    vector<ll> v(n);
    map<ll, ll> mp;
 
    for(auto &x: v)
    {
        cin>>x;
        mp[x]++;
    }
 
    sort(v.begin(), v.end());
    ll j = 
    for(ll i=0; i<n; i++)
    {
        cout << "ASHO " << v[i] << endl;
        ll pre;
        if(mp[v[i]])
        {
            pre= v[i] * m;
            if(mp[pre])
            {
                mp[pre]--;
                mp[v[i]]--;
            }
        }
    }
 
    ll sum=0;
    for(auto x: mp)
    {
        sum+= x.second;
    }
 
    cout<<sum<<"\n";
 
}
int main()
{
 
    ios::sync_with_stdio(false);
    int t = 1;
    cin>>t;
 
    while (t--)
    {
        solve();
    }
}