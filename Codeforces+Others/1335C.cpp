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
        ll n,i,j,k,dis=0;
        cin >> n;
        vector <ll> arr;
        for(i=0; i<n; i++)
        {
            cin >> k;
            arr.push_back(k);
        }
        sort(arr.begin(),arr.end());
        ll dm=0,ndm;
        for(i=0; i<n; i++)
        {
            ll d=0;
            for(j=i; j<n; j++)
            {
                if(arr[i]!=arr[j])
                    break;
                d++;
            }
            if(d>dm)
            {
                dm=d;
                ndm=i;
            }
        }
        for(i=0; i<n; i++)
        {
            if(arr[i]==arr[ndm])
            {
                arr.erase(arr.begin()+i,arr.begin()+i+(dm));
                break;

            }
        }
        dis=1;
        for(i=1;i<arr.size();i++)
        {
            if(arr[i]!=arr[i-1])
                dis++;
        }
        if(n==1)
            cout << 0 << endl;
        else
        {
            if(dm*2>(dis)*2)
                {
                    dm--;
                    dis++;
                }
            while(1)
            {
                if(dm*2<=(dis)*2)
                {
                    cout << dm << endl;
                    break;
                }
                dm--;

            }
        }
    }

}

