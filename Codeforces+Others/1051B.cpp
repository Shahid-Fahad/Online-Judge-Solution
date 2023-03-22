///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll gcd (ll a, ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    ll l,r,k,i,j,c=0,z;
    cin >> l >> r;
    k = (r-l+1)/2;

    cout << "YES" << endl;
    for(i=1;i<=k;i++)
    {
        cout << l << " " << l+1 << endl;
        l=l+2;
    }
}
