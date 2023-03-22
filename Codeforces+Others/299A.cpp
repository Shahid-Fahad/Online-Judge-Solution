///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll n,k,i;
    cin >> n;
    ll arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    k = arr[0];
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]%k!=0)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << k << endl;
}
