///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;
    cin >> a >> b;
    a = a+b;
    if(a>=15&&b>=8)
    cout << 1 << endl;
    else if(a>=10&&b>=3)
    cout << 2 << endl;
    else if(a>=3)
    cout << 3 << endl;
    else
    {
        cout << 4 << endl;
    }
    


}
