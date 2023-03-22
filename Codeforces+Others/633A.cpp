///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll a,b,c;
    cin >> a >> b >> c;
    if(c%a==0||c%b==0)
    {
        cout << "YES" << endl;
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
               return 0;

           }
        }
    cout << "NO" << endl;
    }
}
