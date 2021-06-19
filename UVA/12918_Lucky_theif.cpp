#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long double k,h;
        cin >> k >> h;
        cout << fixed;
        cout << setprecision(0) << ((h-k)*k)+((k-1)*(k))/2 << endl; ///extra house in worst case + n(n+1)/2
    }
}
