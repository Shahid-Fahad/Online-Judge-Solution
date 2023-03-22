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
    ll arr[n+5],arr2[n+5];
    for(ll i=0;i<n;i++)
    cin >> arr[i];
    for(ll i=0;i<n;i++)
    cin >> arr2[i];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll k = arr[i]*arr2[i];
        sum = sum+k;
    }
    if(sum==0)
    cout << "Yes" << endl;
    else
    {
        cout << "No" << endl;
    }
    

}
