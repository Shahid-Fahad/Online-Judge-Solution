///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll n,x,i,k=1,f,g;
    cin >> n >> x;
    k = pow(10,x);
    g = (n*k)/__gcd(n,k);
    cout << g << endl;
}
