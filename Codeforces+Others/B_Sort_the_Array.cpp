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
    ll arr[n+5];
    for(ll i=0;i<n;i++)
    cin >> arr[i];
    ll u=0,l=0,f=0,f2=0;
    for(ll i=0;i<n-1;i++)
    {
       if(arr[i]>arr[i+1])
       {
           f2++;
           if(f==0)
           {
               u=i;
               f=1;
               l=i+1;
           }
           else
           {
               l=i+1;
           }
           
       }
       else
       {
           if(f2>0)
           break;
       }
       
    }
     
    reverse(arr+u,arr+(l+1));
    for(ll i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    cout << u+1 << " " << l+1 << endl;



}
