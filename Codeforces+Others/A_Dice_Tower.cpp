///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    cin >> n >> x;
    ll f=0;
    while(n--)
    {
        ll a,b;
        cin >> a >> b;
        if(a==x||b==x)
        {
            cout << "NO" << endl;
            f=1;
            break;
        }
        else if(abs(7-a)==x||abs(7-b)==x)
        {
            cout << "NO" << endl;
            f=1;
            break;
        }

    }
    if(f==0)
    cout << "YES" << endl;


    
   
 }

