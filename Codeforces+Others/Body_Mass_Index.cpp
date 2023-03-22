///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll h, m;
        cin >> m >> h;
        ll x = m / (h * h);
        if(x<=18)
        cout << 1 << endl;
        if(x>18&&x<25)
        cout << 2 << endl;
        if(x>24&&x<30)
        cout << 3 << endl;
        if(x>=30)
        cout << 4 << endl;
    }
}
