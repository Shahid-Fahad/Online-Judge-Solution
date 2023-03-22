///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    for(ll i=10;i>=1;i--)
    {
        if(n%i==0)
        {
            cout << i << endl;
            return 0;
        }
    }

}
