///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll a,b,c;
    cin >> c >> a >> b;
    if(c%a==0)
    {
        cout << "YES" << endl;
        cout << c/a << " " << 0 << endl;
        return 0;
    }
   else if(c%b==0)
    {
        cout << "YES" << endl;
        cout << 0 << " " << c/b << endl;
        return 0;
    }
    else
    {
        ll x=c/a,i,j,sum,y;
        for(i=1;i<=x;i++)
        {
            y = c-(a*i);
           if(y>0&&y%b==0)
           {
               cout << "YES" << endl;
               cout << i << " " << y/b << endl;
               return 0;

           }
        }
    }
    cout << "NO" << endl;
}
