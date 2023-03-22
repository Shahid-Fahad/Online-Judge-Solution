///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        if(n==1)
        {
            cout << k << endl;
        }
        else
        {
           if(n<k)
           {
               if(k%n==0)
               {
                   cout << k/n << endl;
               }
               else
               cout << k/n+1 << endl;
           }
           else if (n==k)
           {
               cout << 1 << endl;
           }
           else
           {
               ll i=2,t=k;
               while(t<n)
               {
                   t = k*i;
                   i++; 
               }
        
               
                if(t%n==0)
               {
                   cout << t/n << endl;
               }
               else
               cout << t/n+1 << endl;
           }
           
        }
        
    }
 
}