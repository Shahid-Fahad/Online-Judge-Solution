///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll cn(ll x,ll d)
{
    while(x!=0)
    {
        if(x%10==d)
        {
            return 1;
        }
        x = x/10;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll q,d;
        cin >> q >> d;
        while(q--)
        {
            ll n;
            cin >> n;
            ll  x = n%d;
            ll f=0;
           
            if(x==0||cn(n,d)==1)
            {
                cout << "YES" << endl;
            }
            else
            {
                while(x<n)
                {
                    if(cn(x,d)==1)
                    {
                        cout << "YES" << endl; 
                        f=1;
                        break;
                    }
                    x = x+d;
                }
            if(f==0)
            {
                cout << "NO" << endl;
            }
            }
            
        }

    }

}
