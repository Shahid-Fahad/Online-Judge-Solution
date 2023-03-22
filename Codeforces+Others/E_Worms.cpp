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
    ll arr[n+5];
    ll s=0;
    arr[0]=0;
    for(ll i=1;i<=n;i++)
    {
        cin >> arr[i];
        s = s+arr[i];
        arr[i] = s;
    }
    ll q;
    cin >> q;
    while(q--)
    {
        ll x;
        cin >> x;
        ll l=1,r=n,f=0;
        while(r-l>1)
        {
            ll m = (l+r)/2;
            ll lwlim=arr[m-1]+1;
            ll uplim=arr[m];
            //cout << "test " << m << " " << lwlim << " " <<uplim << endl;
            if(x<lwlim)
            {
                r=m;
            }
            else if(x>uplim)
            {
                l=m;
            }
            else
            {
                cout << m << endl;
                f=1;
                break;
            }


        }
        if(f==0)
        {
            if(x>=(arr[l-1]+1)&&x<=arr[l])
                cout << l << endl;
            else
                cout << r << endl;
        }


    }

}
