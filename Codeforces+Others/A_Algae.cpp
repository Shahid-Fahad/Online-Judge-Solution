///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,p,q,w;
    cin >> p>> q >> w;
    ll j;
    for(j=1;j<=10;j++)
    {
        cout << (p*w)-q << endl;
        w = (p*w)-q;
    }

}
