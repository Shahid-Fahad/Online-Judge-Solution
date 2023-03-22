///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll fact(ll a)
{
    ll i,f=1;;
    for(i=a;i>=2;i--)
        f = f*i;
    return f;
}
int main()
{
    ll a,b;
    cin >> a >> b;
    cout << fact(min(a,b)) << endl;
}
