#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        int m,b=0,w=0,a=0,t=0;
        char r;
        cin >> m;
        int ab = m;
        for(j=1;j<=m;j++)
        {
            cin >> r;
            if(r=='B')
                b++;
           else if(r=='W')
                w++;
           else if(r=='A')
                a++;
           else if(r=='T')
                t++;
        }
        cout << "Case " << i << ": ";

        if (a == m)
            cout << "ABANDONED";
        else if (b == w)
            cout << "DRAW " << b << ' ' << t;
        else if (w + a == m)
            cout << "WHITEWASH";
        else if (b + a == m)
            cout << "BANGLAWASH";
        else
        {
            if (b > w)
                cout << "BANGLADESH " << b << " - " << w;
            else
                cout << "WWW " << w << " - " << b;
        }
        cout << '\n';
    }
}
