///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    //ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << "Enter Number to Find: ";
    ll x;
    cin >>x;
    ll low=0,hi=n-1,mid,f=0;
    while(low<=hi)
    {
        mid = (low+hi)/2;
        if(arr[mid]==x)
        {
            cout << "Found at index " << mid+1 << endl;
            f=1;
            break;
        }
        else if(arr[mid]>x)
        {
            hi = mid-1;
        }
        else
        {
            low = mid+1;
        }


    }
    if(f==0)
    {
        if(abs(arr[low]-x)==abs(arr[hi]-x))
        cout << arr[low] << " " << arr[hi] << endl;
        else if(abs(arr[low]-x)>abs(arr[hi]-x))
            cout << arr[hi] << endl;
        else
            cout << arr[low] << endl;
    }

}
