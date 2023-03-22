///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        ll arr[n+5],i,j;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        ll ans,f=0;
        for(i=1;i<=k;i++)
        {
             f=0;
            for(j=0;j<n-1;j++)
            {
                if(arr[j]<arr[j+1])
                {
                    f=1;
                    arr[j]++;
                    break;
                }
            }
            
            if(f==0)
            break;
           
            
        }
            if(f==0)
            cout << -1 << endl;
            else
            {
                cout << j+1 << endl;
            }
            
    }

}
