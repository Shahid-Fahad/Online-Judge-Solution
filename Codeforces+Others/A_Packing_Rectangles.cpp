///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,h,w;
    cin >> w >> h >> n;
    ll ar = n*h*w;
    ll l = -1, r=1;
    while(1)
    {
        ll ans = (r/h)*(r/w);
        if(ans>=n)
        break;
        r = r*2;
    }
    while(r-l>1)
    {
        ll m = (r+l)/2;
        ll ans = (m/(min(w,h)))*(m/max(w,h));
        if(ans>=n)
        r = m;
        else
        {
            l = m;
        }
    }
    cout << r << endl;

}
