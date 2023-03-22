///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x,y,k;
    cin >> x >> y;
     k = abs(min(x,y)- max(x,y));
   
    if(k<3)
    cout << "Yes" << endl;
    else
    {
        cout << "No" << endl;
    }
    



}
