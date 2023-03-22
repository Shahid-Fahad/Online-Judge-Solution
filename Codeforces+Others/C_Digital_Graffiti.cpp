///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin >> n >> m;
    char arr[n][m];
    ll i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> arr[i][j];
        }
    }
    ll pr=INT_MAX,ans=0,l;
     vector<ll>v;
     for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            ll x= arr[i][j];
            /*ll x = arr[i][j];
            ll d = arr[i+1][j];
            ll u = arr[i-1][j];
            ll lfd = arr[i+1][j-1];
            ll rtd = arr[i+1][j+1];*/

            if(x=='#')
            {   
                v.push_back(j);
                break;
            }
        }
        ll f=0;
        set<ll>s1,s2,s3;
        ll a=1,b=1,c=1;
        for(i=1;i<v.size();i++)
        {
            if(v[i-1]>v[i])
            s1.insert(a);
            else if(v[i]>v[i-1])
            s2.insert(v[i]);
            else if(v[i-1]==v[i])
            s3.insert(v[i]);
        }
    }


}
