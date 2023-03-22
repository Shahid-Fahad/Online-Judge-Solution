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
    ll arr[n+5],arr2[n+5]={0};
    ll i,ser=n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==ser)
        {
            cout << ser;
            arr2[ser-1]=1;
            ser--;
            while(ser>0)
            {
                if(arr2[ser-1]==1)
                {
                    cout << " " <<ser;
                    ser--;
                }
                else
                    break;
            }
            cout << endl;
        }
        else
        {
            cout << endl;
            arr2[arr[i]-1]=1;
        }
    }
}
