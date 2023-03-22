///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll a,b;
    cin >> a >> b;
    while(1)
    {
        if(a>=(2*b))
        {
            a = a%(2*b);
        }
        else if(b>=(2*a))
        b = b%(2*a);
        else
        break;
          if((a==0||b==0))
            break;
    }
    cout << a << " " << b << endl;
}
