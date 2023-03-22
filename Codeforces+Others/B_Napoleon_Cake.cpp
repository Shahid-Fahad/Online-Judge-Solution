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
        ll n;
        cin >> n;
        ll arr[n+5];
        for(ll i=1;i<=n;i++)
        cin >> arr[i];
        for(ll i=n;i>=1;i--)
        {
            
            if(arr[i]>=1)
            {
                //cout << "DEKHI " << arr[i] << " " << i << endl;
                ll z=arr[i];
                for(ll k=1;k<=z;k++)
                {
                    if(arr[i]>=z)
                    {
                        z = arr[i];
                        k=1;
                    }
                    arr[i]=1;
                    //cout << "TEST " << i  << " "<< endl;
                    i--;
                    if(i<1)
                    break;
                }
                i++;
                //cout << "Break " << i << endl;
            }
        }
        for(ll i=1;i<=n;i++)
        cout << arr[i] << " ";
        cout << endl;
    }
 
}