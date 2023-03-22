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
        ll n,i,j,s=0;
        cin >> n;
        ll arr[n];
        for(i=0;i<n;i++)
        cin >> arr[i];
        for(i=0;i<n-1;i++)
        {
            if(arr[i]+arr[i+1]<=arr[n-1])
            {
                s=1;
                break;
            }
        }
        if(s==1)
            cout << i+1 << " " << i+2 << " " << n << endl;
        else
            cout << -1 << endl;
    }

}

