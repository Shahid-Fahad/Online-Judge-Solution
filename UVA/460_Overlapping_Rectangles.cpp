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
        ll fx1, fy1, fx2, fy2, sx1, sy1, sx2, sy2;
        cin >> fx1 >> fy1 >> fx2 >> fy2 >> sx1 >> sy1 >> sx2 >> sy2;
        ll mnx = min(min(fx1, fx2), min(sx1, sx2));
        ll mny = min(min(fy1, fy2), min(sy1, sy2));
        ll mxx = max(max(fx1, fx2), max(sx1, sx2));
        ll mxy = min(max(fy1, fy2), max(sy1, sy2));

        if (sx1 >= mnx && sx1 <= mxx && fy1 >= mny && fy1 <= mxx && fx2 >= mnx && fx2 <= mxx && sy2 >= mny && sy2 <= mxx)
        {
            if (fx2 > sx1 && sy2 > fy1)
                cout << sx1 << " " << fy1 << " " << fx2 << " " << sy2 << endl
                     << endl;
            else
            {
                cout << "No Overlap" << endl
                     << endl;
            }
        }
        else if (fx1 >= mnx && fx1 <= mxx && fy1 >= mny && fy1 <= mxx && sx2 >= mnx && sx2 <= mxx && sy2 >= mny && sy2 <= mxx)
        {
            if (sx2 > fx1 && sy2 > fy1)
                cout << fx1 << " " << fy1 << " " << sx2 << " " << sy2 << endl
                     << endl;
            else
            {
                cout << "No Overlap" << endl
                     << endl;
            }
        }
        else if (sx1 >= mnx && sx1 <= mxx && sy1 >= mny && sy1 <= mxx && fx2 >= mnx && fx2 <= mxx && fy2 >= mny && fy2 <= mxx)
        {
            if (fx2 > sx1 && fy2 > sy1)
                cout << sx1 << " " << sy1 << " " << fx2 << " " << fy2 << endl
                     << endl;
            else
            {
                cout << "No Overlap" << endl
                     << endl;
            }
        }
        else if (fx1 >= mnx && fx1 <= mxx && sy1 >= mny && sy1 <= mxx && sx2 >= mnx && sx2 <= mxx && fy2 >= mny && fy2 <= mxx)
        {
            if (sx2 > fx1 && fy2 > sy1)
                cout << fx1 << " " << sy1 << " " << sx2 << " " << fy2 << endl
                     << endl;
            else
            {
                cout << "No Overlap" << endl
                     << endl;
            }
        }
        else
        {
            cout << "No Overlap" << endl
                 << endl;
        }
    }
}
