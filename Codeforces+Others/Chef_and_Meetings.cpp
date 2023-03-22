///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll hh, mm;
        scanf("%lld:%lld", &hh, &mm);
        string ap;
        cin >> ap;
        ll thr;

        if (ap == "AM")
        {
            if (hh == 12)
                thr = 0;
                else
                {
                    thr = hh;
                }
        }
        else
        {
            if (hh != 12)
                thr = hh + 12;
            else
                thr = 12;
        }
        ll q;
        cin >> q;
        while (q--)
        {
            ll lhh, lmm, rhh, rmm;
            scanf("%lld:%lld", &lhh, &lmm);
            string ap1, ap2;
            cin >> ap1;
            scanf("%lld:%lld", &rhh, &rmm);
            cin >> ap2;
            ll thr1;
            if (ap1 == "AM")
            {
                if (lhh == 12)
                    thr1 = 0;
                else
                {
                    thr1 = lhh;
                }
                
            }
            else
            {
                if (lhh != 12)
                    thr1 = lhh + 12;
                else
                    thr1 = 12;
            }
            ll thr2;
            if (ap2 == "AM")
            {
                if (rhh == 12)
                    thr2 = 0;
                    else
                {
                    thr2 = rhh;
                }
            }
            else
            {
                if (rhh != 12)
                    thr2 = rhh + 12;
                else
                    thr2 = 12;
            }
            //cout << thr << " " << thr1 << " " << thr2 << endl;
            if(thr>=thr1&&thr<=thr2)
            {
                if((thr==thr1&&mm<lmm)||(thr==thr2&&mm>rmm))
                cout << "0";
                else
                {
                    cout << "1";
                }
                
            }
            else
            {
                cout << "0";
            }
            
        }
        cout << endl;
    }
}
