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
        ll n,k;
        cin >> n >> k;
       ll x = abs(3-k);
       n = n-x;
        if(n%2==1)
        {
            cout << n/2 << " " << n/2 << " " << 1;
        }
        else
        {
            if((n/2)%2==1)
            {
                cout << n/2-1 << " " << n/2-1 << " " << 2 ;
            }
            else
            {
                cout << n/2 << " " << (n/2)/2 << " " << (n/2)/2;
            }
            
        }
        while(x--)
        {
            cout << " " << 1;
        }
        cout << endl;
    }

}
