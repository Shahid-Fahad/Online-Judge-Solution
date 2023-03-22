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
        ll x = (n-1)/2;
        if(k>x)
        {
            cout << -1 << endl;
            continue;
        }
        ll arr[n+5],arr2[n+5]={0};
        for(ll i=1;i<=n;i++)
        {
            arr[i]=i;
        }
        sort(arr+1,arr+n+1);
        reverse(arr+1,arr+n+1);

        for(ll i=2,j=1;j<=k;j++,i=i+2)
        {
            arr2[i]=arr[j];
            arr[j]=0;
        }
        for(ll i=1,j=k+1;i<=n;)
        {
           if(arr2[i]!=0)
           {
               i++;
           }
           else
           {
               arr2[i]=arr[j];
               i++;
               j++;
           }
        }
       

        for(ll i=1;i<=n;i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;



    }

}
