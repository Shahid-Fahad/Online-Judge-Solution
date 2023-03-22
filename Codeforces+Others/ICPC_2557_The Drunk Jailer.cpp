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
        ll arr[n+5]={0};
        for(ll i=1;i<=n;i++)
        {
            for(ll j=i;j<=n;j=j+i)
            {
                if(arr[j]==0)
                arr[j]=1;
                else
                arr[j]=0;
            }
        }
        ll c=0;
        for(ll i=1;i<=n;i++)
        {
            if(arr[i]==1)
            c++;
        }
        cout << c << endl;
    }

}
