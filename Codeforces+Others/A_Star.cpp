///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;
    cin >> x;
    ll n = x/100;
    if(x%100!=0)
    {
        n++;
        cout << (n*100)-x << endl;
    }
    else
    {
        cout << 100 << endl;
    }

}
