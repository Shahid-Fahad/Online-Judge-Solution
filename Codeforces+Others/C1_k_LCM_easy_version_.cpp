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
        if(n%2==1)
        {
            cout << n/2 << " " << n/2 << " " << 1 << endl;
        }
        else
        {
            if((n/2)%2==1)
            {
                cout << n/2-1 << " " << n/2-1 << " " << 2 << endl;
            }
            else
            {
                cout << n/2 << " " << (n/2)/2 << " " << (n/2)/2 << endl;
            }
            
        }
    }

}
