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
    ll tk=k;
    ll arr[n+5];
    ll lneg=0,neg=0,zc=0,pos=0,ni;
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]<0)
        {
            lneg=arr[i]*-1;
            ni=i;
            neg++;
        }
        else
        pos++;
        if(arr[i]==0)
        zc++;
    }
    ll s=0;
    for(ll i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(k>0)
            {
                arr[i] = arr[i]*-1;
                k--;
            }
        }
        s = s+arr[i];
    
    }
    if(k==0)
    {
        cout << s << endl;
    }
    else
    {
        if(k%2==0)
        {
            cout << s << endl;
        }
        else
        {
            if(zc>0)
            {
                cout << s << endl;
            }
            else if(neg!=0)
            {
                if(tk<neg||pos==0)
                cout << s-(2*lneg) << endl;
                else
                cout << s-(2*min(lneg,arr[ni+1])) << endl;
            }
            else
            cout << s-(2*arr[0]) << endl;
        }
    }

}
