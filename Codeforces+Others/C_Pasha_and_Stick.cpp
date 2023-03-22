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
    if(n%2==1||n<=4)
    {
        cout << 0 << endl;
    }
    else
    {
       ll x=((n-2)/2)-1;
       if(x%2==1)
       {
           cout << x/2 + 1 << endl;
       }
       else
       {
           cout << x/2 << endl;
       }
       
    }
    


}
