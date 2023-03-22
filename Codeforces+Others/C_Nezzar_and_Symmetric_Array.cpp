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
        ll x;
        cin >> x;
        ll c=0,tm=x;
        while(tm--)
        {
            ll q;
            cin >> q;
            if(q%2==0)
            c++;
        }
        if(c==x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }

}
