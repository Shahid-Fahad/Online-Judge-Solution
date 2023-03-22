//Bismillahir Rahmanir Raheem
#ifdef ONLINE_JUDGE
#endif
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<ll>
#define vii vector<ll>::iterator
#define vd vector<double>
#define vdi vector<double>::iterator
#define vs vector<string>
#define vsi vector<string>::iterator
#define vc vector<char>
#define vci vector<char>::iterator
#define mii map<ll, ll>
#define miii map<ll, ll>::iterator
#define msi map<string, ll>
#define msii map<string, ll>::iterator
#define mci map<char, ll>
#define mcii map<char, ll>::iterator
#define maxx(a, b, c) max(a, max(b, c))
#define minn(a, b, c) min(a, min(b, c))
#define SORT(x) sort(x.begin(), x.end())
#define fill(x, y) memset(x, y, sizeof(x))
#define PI 2 * acos(0.0)
#define pi acos(-1)
#define lcm(x, y) x *(y / gcd(x, y))
#define EPS 1e-13
#define rep(i, n) for (ll i = 0; i < (ll)n; i++)
#define fio                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int main()
{
    fio;
//#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    ///freopen("output.txt", "w", stdout);
//#endif
    ll t;
    cin >> t;
    while (t--)
    {
        ll cn = 0, i, s;
        string a, b;
        cin >> s >> a >> b;
        for (i = 0; i < a.size(); i++)
        {
            if (i == 0)
            {
                if (a[i] == '0' and b[i] == '1')
                {
                    cn++;
                    a[i] = 'x';
                }
                else  if (a[i + 1] == '1' and b[i] == '1')
                {
                    cn++;
                    a[i + 1] = 'x';
                }
            }
            else
            {
                if (b[i] == '1')
                {
                    if (a[i] == '0')
                    {
                        a[i] = 'x';
                        b[i] = '0';
                        cn++;
                    }
                    else if (a[i - 1] == '1')
                        cn++;
                    else if (a[i + 1] == '1')
                    {
                        cn++;
                        a[i + 1] = 'x';
                    }
                }
            }
        }
        cout << cn << endl;
        // cout << a << "\n" << b << "\n" << endl;
    }
}