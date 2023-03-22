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
    ll a,b,i=2,k;
    cin >> a >> b;
    if(a%2==1)
        a++;
    k = a + 2;
    if(b<k)
    {
        cout << -1 <<endl;
        return 0;
    }
        cout << a << " " << a+1 << " " << k << endl;
}

