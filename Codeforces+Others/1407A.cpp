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
        ll n,i,zc=0,oc=0;
        cin >> n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i]==0)
                zc++;
            else
                oc++;
        }
        ll k = n/2;
        if(oc>k)
        {
            if(k%2==1)
            {
                k++;
            }

            cout << k << endl;
            while(k--)
            {
                cout << "1 ";
            }
            cout << endl;
        }
        else
        {
            cout << k << endl;
            while(k--)
            {
                cout << "0 ";
            }
            cout << endl;
        }


    }

}

