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
        ll a,b,c;
        cin >> a >> b  >> c;
       
        for(ll i=1;i<=a-(c-1);i++)
        {
            cout << "1";
        }
        for(ll i=1;i<=c-1;i++)
        {
            cout << "0";
        }
        cout << " ";
        for(ll i=1;i<=b-(c-1)-1;i++)
        {
            cout << "1";
        }
        cout << "2";
        for(ll i=1;i<=c-1;i++)
        {
            cout << "0";
        }
        cout << endl;


    }

}
