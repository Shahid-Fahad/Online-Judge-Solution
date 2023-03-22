///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll n,x,i,j,k,sum=0,t;
    cin >>t;
    while(t--)
    {
        cin >> n >> x;
        vector<ll>arr;
        ll sum=0;
        for(i=0; i<n; i++)
        {
            cin >> j;
            arr.push_back(j);
            sum = sum+arr[i];
        }
        if(sum%x!=0)
        {
            cout << n << endl;
            continue;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(arr[i]%x==0)
                    arr.erase(arr.begin()+i);
            }
        }
        if(arr.size()==0)
        {
            cout << -1 << endl;
            continue;
        }
        ll p=1;
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                ll c=0;
                for(k=i;k<=j;k++)
                {
                    c++;
                    sum = sum + arr[k];
                }
                if(sum%x!=0)
                {
                    cout << c << endl;
                    continue;
                }
            }
        }
        cout << -1 << endl;

}

}
