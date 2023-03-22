///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,i,j;
    cin >> t;
    while(t--)
    {
        ll a,b,c,d,k;
        k = max(c,d);
        cin >> a >> b >> c >> d;
        while(a!=0&&b!=0)
        {
            if(k==c)
            {
                if(a>b)
                    a--;
                else
                    b--;
            }
            else
            {
                if(a>b)
                    b--;
                else
                    a--;
            }

        }
        if(a>0||b>0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;

    }
}
