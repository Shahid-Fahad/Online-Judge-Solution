///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll n,x,y=1,m,i,j;
    cin >> n;
    m = n/2+1;
    ll arr[n];
    vector<ll>v;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                v.push_back(arr[i]);
        }
    }
    for(i=0;i<v.size();i++)
        y = y*v[i];
    ll p=0;
    for(i=n-1;i>=0;i--)
    {
        ll f=0;
        for(j=0;j<v.size();j++)
        {
            if(arr[i]%v[j]!=0)
                f++;
        }
        if(f==0)
        {
            ll q=0;
            for(x=0;x<n;x++)
            {
                if(arr[i]%arr[x]==0)
                    q++;
            }
            if(q>=m)
            {
                cout << arr[i] << " ";
                p++;
            }
        }
        if(p==2)
        {
            cout << endl;
            break;
        }
    }

   /*
    for(i=mn;i<=mx;i++)
    {
        ll f=0;
        for(j=0;j<n;j++)
        {
            if(i%arr[j]==0&&y%arr[j]!=0)
            {
               f++;
            }
        }
        cout << i << " " << f << endl;
        if(f>=(n/2)+1)
        {
            cout << i << " " << y << endl;
            return 0;
        }
    }*/
}
