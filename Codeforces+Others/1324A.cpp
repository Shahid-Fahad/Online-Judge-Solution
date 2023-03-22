///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll t,i;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        ll c = arr[0]%2,p=0;
        for(i=1;i<n;i++)
        {
            if(arr[i]%2!=c)
            {
                p++;
                break;
            }
        }
        if(p==0)
        cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
