///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ld w,a,b,c;
        cin >> w >> a>> b >> c;
        ld x = ceil(w/a);
        ld y = ceil(w/b);
        ld z = ceil(w/c);
        ll p=x*a,q=y*b,r=z*c;
        ll k=w;
      

        cout << min((min(abs(k-p),abs(k-q))),abs(k-r)) << endl;
    }


}
