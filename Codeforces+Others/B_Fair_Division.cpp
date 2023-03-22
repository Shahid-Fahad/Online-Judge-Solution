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
        ll n;
        cin >> n;
        ll sum=0;
        ll t=0,o=0;
        while(n--)
        {
            ll x;
            cin >> x;
            if(x==1)
            o++;
            else
            {
                t++;
            }
            
        }
        if(o%2==1)
        cout <<"NO"<<endl;
        else
        {
            ll k = o/2;
            k = k+t;

            if(o==0&&t%2==1)
            cout << "NO" << endl;
            else
            {
                cout << "YES" << endl;
            }
            
    
        }
        
        
        
    }
 
}