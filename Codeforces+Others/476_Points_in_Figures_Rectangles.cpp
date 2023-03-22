///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<ld>> v;
    char t;
    while (cin >> t)
    {
        if (t == '*')
            break;
        vector<ld> tmp;
        ld x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        tmp.push_back(x1);
        tmp.push_back(y1);
        tmp.push_back(x2);
        tmp.push_back(y2);

        v.push_back(tmp);
    }
    ll i;
    ld x, y;
    ll c=0;
    while(cin >> x >> y)     
    {
        c++;
        if(9999.9-x<0.0000001&&9999.9-y<0.0000001)
        break;
        ll f=0;
        for (i = 0; i < v.size(); i++)
        {
            ld x1 = v[i][0], y1 = v[i][1], x2 = v[i][2], y2 = v[i][3];
            if (x > x1 && x < x2&& y>y2&&y<y1)
            {
                printf("Point %lld is contained in figure %lld\n",c,i+1);
                f=1;
            }
        }
        if(f==0)
        {
            printf("Point %lld is not contained in any figure\n",c);
        }
    }
}
