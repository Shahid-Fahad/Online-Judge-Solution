///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll n,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n==1)
        {
            cout << -1 << endl;
            continue;
        }
        cout << 2 ;
        for(ll i=1; i<=n-2; i++)
            cout << 3;

        cout << 9 << endl;
    }

}
