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
char test[4][4];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //cin >> t;
   string str;
    while (cin >> str)
    {
        if(str=="end")
        break;
        ll ind=0;
        char arr[4][4];
        ll xc = 0, oc = 0,dc=0;;
        for (ll i = 1; i <= 3; i++)
        {
            for (ll j = 1; j <= 3; j++)
            {
                arr[i][j]=str[ind++];
        
                if (arr[i][j] == 'X')
                    xc++;
               else if (arr[i][j] == 'O')
                    oc++;
                else
                dc++;
            }
        }
        
        if (xc != oc && xc != (oc + 1))
        {
            cout << "invalid" << endl;
            continue;
        }
        ll winx = 0,winy=0;
        char ch = 'z';

        if (arr[1][1] == arr[1][2] && arr[1][2] == arr[1][3]&&arr[1][3]!='.')
        {
            ch = arr[1][1];
            if(ch=='X')
            winx++;
            else
            winy++;
        }
        if (arr[2][1] == arr[2][2] && arr[2][2] == arr[2][3]&&arr[2][3]!='.')
        {
             
            ch = arr[2][1];
            if(ch=='X')
            winx++;
            else
            winy++;
        }
        if (arr[3][1] == arr[3][2] && arr[3][2] == arr[3][3]&&arr[3][3]!='.')
        {
            ch = arr[3][1];
            if(ch=='X')
            winx++;
            else
            winy++;

        }

        if (arr[1][1] == arr[2][1] && arr[2][1] == arr[3][1]&&arr[3][1]!='.')
        {
             
            ch = arr[1][1];
            if(ch=='X')
            winx++;
            else
            winy++;
        }
        if (arr[1][2] == arr[2][2] && arr[2][2] == arr[3][2]&&arr[3][2]!='.')
        {
             
            ch = arr[1][2];
            if(ch=='X')
            winx++;
            else
            winy++;
        }
        if (arr[1][3] == arr[2][3] && arr[2][3] == arr[3][3]&&arr[3][3]!='.')
        {
             
            ch = arr[1][3];
            if(ch=='X')
            winx++;
            else
            winy++;
        }
        if (arr[1][1] == arr[2][2] && arr[2][2] == arr[3][3]&&arr[3][3]!='.')
        {
             
           ch= arr[1][1];
           if(ch=='X')
            winx++;
            else
            winy++;
        }
        if (arr[1][3] == arr[2][2] && arr[2][2] == arr[3][1]&&arr[3][1]!='.')
        {
             
           ch= arr[1][3];
           if(ch=='X')
            winx++;
            else
            winy++;
        }
        if (winx>0&&winy>0)
        {
            cout << "invalid" << endl;
        }
        else if (winx==0&&winy==0)
        {
            if(dc==0)
            cout << "valid" << endl;
            else
            cout << "invalid" << endl;
        }
        else
        {
            if (ch == 'X')
            {
                if (xc == oc + 1)
                {
                    cout << "valid" << endl;
                }
                else
                {
                    cout << "invalid" << endl;
                }
            }
            else
            {
                if (xc == oc)
                {
                    cout << "valid" << endl;
                }
                else
                {
                    cout << "invalid" << endl;
                }
            }
        }
    }
   

}