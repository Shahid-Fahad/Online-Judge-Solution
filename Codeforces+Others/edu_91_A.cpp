///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll t,i,j,k,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll>arr;
        arr.clear();
        ll c=0;
        for(i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            arr.push_back(x);
        }
        for(i=1; i<n-1; i++)
        {
            if(arr[i-1]<arr[i]&&arr[i]>arr[i+1])
            {
                cout << "YES" << endl;
                cout << i-1+1 << " " << i+1 <<  " " << i+2 << endl;
                //cout << arr[i-1+1-1] << " " << arr[i+1-1] <<  " " << arr[i+2-1] << endl;
                c++;
                break;
            }
        }
    if(c==0)
        cout << "NO" << endl;
    }
}

