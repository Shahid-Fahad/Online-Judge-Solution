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
        ll x,y,n;
        cin >>  x >> y >> n;
        ll c=1;
        while(x%2==0)
        {
            x = x/2;
            c = c+c;
        }
        while(y%2==0)
        {
            y = y/2;
            c = c+c;
        }
        
        if(c>=n)
        cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
        
    }

}
