///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll  n, k, l, c, d, p, nl, np,lime,salt,drink,t=0;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    lime = c*d;
    drink = k*l;
    salt = p;
    while(1)
    {
        lime--;
        drink = drink-nl;
        salt  = salt-np;
        if(lime<0||drink<0||salt<0)
            break;
        t++;
    }
    cout << t/n << endl;

}
