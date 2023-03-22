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
    ll arr[n],arr2[n],i;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    arr2[0] = arr[0];
    for(i=1;i<n;i++)
    arr2[i] = arr[i]+arr2[i-1];
    ll q;
    cin >> q;
    while(q--)
    {
        ll x;
        cin >> x;
        auto it = upper_bound(arr,arr+n,x)-arr;
       if(x<arr[0])
       cout << 0  << " " << 0 << endl;
       else  if(arr[it]<=x)
        {
            cout << it+1 << " " << arr2[it] << endl;
        }
        else
        {
            cout << it << " " << arr2[it-1] << endl;
        }
        
    }


}
