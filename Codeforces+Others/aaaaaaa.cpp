///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i;
    cin >> n;
    ll arr[n],arr2[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        arr2[i]=arr[i];
    }
    sort(arr2,arr2+n);
    ll s=0;
    for(i=0;i<n;i++)
    {
      arr[i] = s+arr[i];
      s =arr[i];
    }
    s=0;
    for(i=0;i<n;i++)
    {
      arr2[i] = s+arr2[i];
      s = arr2[i];
    }
    ll t;
    cin >> t;
    while(t--)
    {
       ll q,l,r;
       cin >> q >> l >> r;
       l--,r--;
       if(q==1)
       {
          if(l==0)
            cout << arr[r] << endl;
          else
            cout << arr[r]-arr[l-1] << endl;
       }
       else
       {
           if(l==0)
            cout << arr2[r] << endl;
          else
            cout << arr2[r]-arr2[l-1] << endl;
       }
    }

}
