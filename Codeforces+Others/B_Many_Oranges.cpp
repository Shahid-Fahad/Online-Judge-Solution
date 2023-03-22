///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, c;
    cin >> a >> b >> c;
    c = c * 1000;
    if (c < a)
    {
        cout << "UNSATISFIABLE" << endl;
        return 0;
    }
    ll cnt = 0;
    ll x = c / b;
    ll f=0;
    if (c % b != 0)
    {
        ll mn = c - (x * b);
        ll dif = abs(b-mn);

        if ((x*b)>=dif)
        {
            x++;
        }
        else
        {
            cout << "UNSATISFIABLE" << endl;
            return 0;
        }
    }
    ll y = c / a;
    if (c % a != 0)
    {
        ll s = y * a;
        ll mn = c - (y * a);
        ld dc =double(b);
        ld ff = mn/y;
        ff +=a;
        if (dc-ff>=0.0000001)
        {
           f++;
        }
        else
        {
            cout << "UNSATISFIABLE" << endl;
            return 0;
        }
    }
    cout << x << " " << y << endl;
}
