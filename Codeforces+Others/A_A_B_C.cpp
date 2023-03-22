///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll p=0;
int NOD ( int n ) {
    int res = 0;
    int sqrtn = sqrt ( n );
     
    for ( int i = 1; i < sqrtn; i++ ) {
        if ( n % i == 0 ) res += 2; // Found a divisor pair {A,B}
    }
     
    // Need to check if sqrtn divides n
    if ( n % sqrtn == 0 ) {
        if ( sqrtn * sqrtn == n ) res++; // If n is perfect square
        else res += 2; // Not perfect square
    }
 
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll s=0;
    for(ll i=1;i<=n;i++)
    {
        ll x = cbrt(i);
        if(x*x*x==i&&i!=1)
        s++;
       ll k = NOD(i);

       if(i==1)
       {
           s++;
       }
       else
       {
           ld d1=(((k/2)-1)*6)+3;
           s = s+d1;
           
           if(k%2==1)
           {
               s = s + 3;
           }
       }
       
       cout << i << " " << s << endl;
       
    }
    cout << s << endl;
    


}
