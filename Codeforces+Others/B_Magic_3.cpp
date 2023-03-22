///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t,p;
    cin >> n >> t >>p;
    while(n--)
    {
        ll x,y;
        cin >> x >> y;
        if(x<t&&y>p)
        {
            cout << "Yes" << endl;
            return 0;
        }
        
    }
    cout << "No" << endl;

}
