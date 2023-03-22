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
    ll maxp = ((k*(k+1))/2)-(k-1);
    
    if(maxp<n)
    cout << -1 << endl;
    else if(n==1)
    {
        cout << 0 << endl;
    }
    else
    {
        ll l = -1 ,r=k+1,d;
        while(r-l>1)
        {
            ll m = (l+r)/2;
            if(m>2)
             d = (((m-1)*m)/2);
            else
            {
                d=0;
            }
            
            ll ans = maxp-d+(m-1);
            if(m==k)
            ans = k;
            if(ans>=n)
            l=m;
            else
            r=m;
        }
        
        cout << abs(l-k)+1 << endl;
    }
    

}
