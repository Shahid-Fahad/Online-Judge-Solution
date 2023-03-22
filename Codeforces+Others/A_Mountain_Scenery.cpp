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
    ll i,arr[2*n+5];
    for(i=1;i<=(2*n+1);i++)
    {
        cin >> arr[i];
       
    }
    for(i=1;i<=(2*n+1);i++)
    {
         if(i%2==0&&k>0)
        {
          
            ll x = arr[i]-1;

            if(x>arr[i-1]&&x>arr[i+1])
            {
                arr[i]--;
                k--;
            }
        }
    }
    for(i=1;i<=(2*n+1);i++)
    cout << arr[i] << " ";
    cout << endl;


}
