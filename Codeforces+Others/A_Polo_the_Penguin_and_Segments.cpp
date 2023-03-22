///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n >> k;
    ll sum=0;
    while(n--)
    {
        ll x,y;
        cin >> x >> y;
        sum = sum  + (y-x)+1;
    }
 

    ll x =  ceil((sum+0.0)/(k+0.0)) * k;
    

    cout << abs(x-sum) << endl;

}
