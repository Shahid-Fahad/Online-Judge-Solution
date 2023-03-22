///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n >> k;
    ll arr[n+5];
    for(ll i=1;i<=n;i++)
    {
        cin >> arr[i];
    }
    ll x = abs(k-1);
    ll y = abs(k-n);
    ll t = min(x,y);
    ll dif = abs(x-y);
    ll c=0;
   // cout << "t = " << t << endl;
    for(ll i=1;i<=t;i++)
    {
        if(arr[k+i]==1&&arr[k-i]==1)
        c = c+2;
    }
  
    if(y>x)
    {
        for(ll i=k+t+1;i<=n;i++)
        {
            if(arr[i]==1)
            c++;
        }
    }
    else if(y<x)
    {
        for(ll i=k-t-1;i>=0;i--)
        {
            if(arr[i]==1)
            c++;
        }
    }
    if(arr[k]==1)
    c++;
    cout << c << endl;

}
