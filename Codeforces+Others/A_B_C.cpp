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
        ll l,r;
        cin >> l >> r;
        ll k = r-l;
        if(k<l)
        cout << 0 << endl;
        else
        {
            k = k-l+1;
           cout << (k*(k+1))/2  << endl;
        }
       
        
    }

}
