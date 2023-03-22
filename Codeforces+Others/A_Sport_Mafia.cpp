///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n >> k;
    ll l=-1,r=n+1;
    while(r-l>1)
    {
        ll m =  (l+r)/2;
        ll ans  = ((m*(m+1))/2) - (n-m);
        if(ans>=k)
        r=m;
        else
        l=m;
        
    }
    cout << n-r << endl;

}
