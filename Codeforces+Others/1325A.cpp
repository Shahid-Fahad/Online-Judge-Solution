///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll gc,lc=0,a=1;
        gc = gcd(1,n-1);
        lc = ((1)*(n-1))/gc;
       cout << gc  <<" "<< lc << endl;
    }

}
