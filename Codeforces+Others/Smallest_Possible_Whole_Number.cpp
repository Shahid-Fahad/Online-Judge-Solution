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
        ll a,b,x;
        cin >> a >> b;
        if(b!=0)
        x = a/b;
        cout << min(a,a-x*b) << endl;
    }

}
