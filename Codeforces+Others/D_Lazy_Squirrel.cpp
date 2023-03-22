#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define case_(tc) cout << "Case " << tc << ": ";
#define all(qz) qz.begin(), qz.end()
#define rall(qz) qz.rbegin(), qz.rend()
const ll mod = 1e9 + 7;
#define pll pair<ll, ll>
const pll M = make_pair(1910270027, 1910270927); 
const int base = 191027;                        
const int N = 3e6 + 7;                          
pll pb[N];                                 
pll invb;
pll operator+(pll a, ll x) { return make_pair(a.ff + x, a.ss + x); }
pll operator-(pll a, ll x) { return make_pair(a.ff - x, a.ss - x); }
pll operator*(pll a, ll x) { return make_pair(a.ff * x, a.ss * x); }
pll operator+(pll a, pll x) { return make_pair(a.ff + x.ff, a.ss + x.ss); }
pll operator-(pll a, pll x) { return make_pair(a.ff - x.ff, a.ss - x.ss); }
pll operator*(pll a, pll x) { return make_pair(a.ff * x.ff, a.ss * x.ss); }
pll operator%(pll a, pll m) { return make_pair(a.ff % m.ff, a.ss % m.ss); }
ostream &operator<<(ostream &os, pll hash)
{
    return os << "(" << hash.ff << ", " << hash.ss << ")";
}
pll power(pll a, ll p)
{
    if (p == 0)
        return make_pair(1, 1);
    pll ans = power(a, p / 2);
    ans = (ans * ans) % M;
    if (p % 2)
        ans = (ans * a) % M;
    return ans;
}
pll inverse(pll a)
{
    return power(a, (M.ff - 1) * (M.ss - 1) - 1);
}
void hashPre()
{
    pb[0] = make_pair(1, 1);
    for (int i = 1; i < N; i++)
        pb[i] = (pb[i - 1] * base) % M;
    invb = inverse(pb[1]);
}
pll append(pll cur, char c) {
    return (cur*base + c)%M;
}
pll prepend(pll cur, int k, char c) {
    return (pb[k]*c + cur)%M;
}
pll pop_back(pll hash, char c) {
    return (((hash-c)*invb)%M+M)%M;
}

pll pop_front(pll hash, int len, char c) {
    return ((hash - pb[len-1]*c)%M+M)%M;
}
int n, u, v;
string str;
vector<int> ed[1000005];
int vis[1000005];
int c = 0;
void f(int x,pll h1,pll h2,string &s)
{
    vis[x]=1;
    if(h1==h2)
    c++;
    for (int i = 0; i < ed[x].size(); i++)
    {
        int z = ed[x][i];
        if(vis[z]==1)
        continue;
        h1 = append(h1,str[z]);
        h2 = prepend(h2,s.size(),str[z]);
        s.pb(str[z]);
        f(z, h1,h2, s);
        s.pop_back();
        h1 = pop_back(h1,str[z]);
        h2 = pop_front(h2,s.size()+1,str[z]);
    }
    vis[x]=0;
}
void solve()
{
    cin >> n;
    cin >> str;
    for (int i = 1; i < n; i++)
    {
        cin >> u >> v;
        u--, v--;
        ed[u].pb(v);
        ed[v].pb(u);
    }
    string ans;
    ans += str[0];
    pll h1 = append({0,0},str[0]);
    pll h2 = prepend({0,0},0,str[0]);
    f(0,h1,h2,ans);
    ll gc = __gcd(c,n);
    cout << (c/gc) << '/' << (n/gc) << endl;
    for (int i = 0; i < n; i++)
        ed[i].clear();
    c = 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    hashPre();
    ll t = 1, tc = 0;
    cin >> t;
    while (t--)
    {
        tc++;
        case_(tc);
        solve();
    }
}
