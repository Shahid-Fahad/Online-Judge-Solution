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
        ll arr1[n],arr2[k],i;
        for(i=0;i<n;i++)
        cin >> arr1[i];
        sort(arr1,arr1+n);
        reverse(arr1,arr1+n);

        for(i=0;i<k;i++)
        cin >> arr2[i];
        ll sum=0,mn=0;
        for(i=0;i<n;i++)
        {
           
            if(arr2[arr1[i]-1]<arr2[mn])
            sum = sum+arr2[arr1[i]-1];
            else
            {
                sum = sum + arr2[mn];
                mn++;
            }
           
           
            
        }
        cout << sum << endl;



    }

}
