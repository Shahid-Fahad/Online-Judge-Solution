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
        ll x = k/2;
        if(k%2==1)
        x++;
        if(x==0)
        {
            cout << 0 << endl;
            continue;
        }
      ll c=0;
        for(ll i=x;i<=n;i++)
        {
            if(i!=k)
            {
                c++;
            }

        }
        cout << c  << endl;
        for(ll i=x;i<=n;i++)
        {
            if(i!=k)
            cout << i << " ";

        }
        cout << endl;

    }
}
