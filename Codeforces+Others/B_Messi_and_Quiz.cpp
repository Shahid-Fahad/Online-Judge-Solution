///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll n;
    cin >> n;
    double s=0,a=n,b;
    for(ll i=1;i<=n;i++)
    {   
        double x = 1/a;
        s = s+x;
        a--;
        
    }
   printf("%0.6lf\n",s);

}
