///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x,y;
    cin >> n >> x >> y;
    n--;
    ll l=-1, r = max(x,y)*n;
    while(r-l>1)
    {
        ll m = (l+r)/2;
        ll ans = (m/x) + (m/y);
        if(ans>=n)
        r=m;
        else
        l=m;
    }
    cout << r + min(x,y) << endl;

}
