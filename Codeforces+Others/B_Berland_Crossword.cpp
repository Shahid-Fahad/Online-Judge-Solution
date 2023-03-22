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
        ll n,u,r,d,l;
        cin >> n >> u >> r >> d >> l;
        ll arr[]={u,r,d,l};
        ll x=n-3;
        if((u<=x&&r<=x&&d<=x&&l<=x)||(u>=2&&r>=2&&d>=2&&l>=2))
        {
            cout << "YES";
        }
        else
        {   
            if(u>=n-1)
            {
                if(u==n-1)
                {
                    if(l<r)
                }
            }

        }
        

    }

}
