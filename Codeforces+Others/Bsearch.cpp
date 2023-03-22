///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll Bsearch(ll arr[], ll x,ll n)
{
    ll low=0,hi=n-1,mid;
    while(low<=hi)
    {
        mid = (hi+low)/2;

        if(arr[mid]>x)
        {
            hi = mid-1;
        }
        else if(arr[mid]<x)
        {
            low = mid+1;
        }
        else
        {
            return mid+1;
        }

        
    }
    return -1;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    ll q;
    cin >> q;
    while(q--)
    {
        ll x;
        cin >> x;
       cout << Bsearch(arr,x,n) << endl;
      
    }

}
