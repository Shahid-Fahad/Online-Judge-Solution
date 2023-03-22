///Bismillahir Rahmanir Rahim
//ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pll pair<ll, ll>
#define vp vector<pair<ll, ll>>
#define pb push_back
#define ff first
#define ss second
#define case_(tc) cout << "Case " << tc << ": ";
#define mem(a, b) memset(a, b, sizeof(a))
#define all(qz) qz.begin(), qz.end()
#define rall(qz) qz.rbegin(), qz.rend()

#define pi acos(-1.0)
#define tani(a) atan(a) / (pi / 180)
#define sini(a) asin(a) / (pi / 180)
#define cosi(a) cos(a) / (pi / 180)
#define cos(a) cos(a *pi / 180)
#define sin(a) sin(a *pi / 180)
#define tan(a) tan(a *pi / 180)
const ll mod = 1e9 + 7;

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define dbg cout << "EKHANE" << endl;

ll Pow(ll c, ll d)
{
    return d == 0 ? 1 : c * pow(c, d - 1);
}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }

ll egcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll gcd = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return gcd;
}
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

//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};,
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        ld a, x, y;
        cin >> a >> x >> y;
        if(y==0)
        {
            cout << -1 << endl;
            continue;
        }
        ll cl = y / a;
        if(int(y)%int(a)!=0)
        cl++;
        
        ll cllim;
        ll tp;
        if (cl == 1 || cl == 2 || cl % 2 == 0)
            tp = 1;
        else if (cl % 2 == 1)
            tp = 2;
        if(tp==1)
        {
            ll clbx=(cl-1)*a,clby=cl*a;
            ld rbx=(a/2.0);
            if(y>clbx&&y<clby&&abs(x)<rbx)
            {
                if(cl==1||cl==2)
                cout << cl <<endl;
                else
                cout << cl+((cl/2)-1) << endl; 
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            ll clbx=(cl-1)*a,clby=cl*a;
            ld rbx = a;
            if(y>clbx&&y<clby&&abs(x)<rbx&&abs(x)>0)
            {
                    ll k=cl-1;
                    if(k==2)
                    k=2;
                    else
                    k =  k+((k/2)-1);
                if(x>0)
                {
                    cout << k+2 << endl;
                }
                else
                {
                    cout << k+1 << endl;
                }
            }
            else
            {
                cout << -1 << endl;
            }

        }
    }
}
