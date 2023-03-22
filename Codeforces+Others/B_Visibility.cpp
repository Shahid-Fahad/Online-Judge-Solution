///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,p,q;
    cin >> n >> m >> p >> q;
    char arr[n+1][m+1];
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        cin >> arr[i][j];
    }
    ll cnt=0;
    for(ll i=q;i<=m;i++)
    {
        if(arr[p][i]=='#')
        {
            break;
        }
        else
        {
            cnt++;
        }
        
    }
   // cout << "TEST " << cnt << endl;
     for(ll i=q-1;i>=1;i--)
    {
        if(arr[p][i]=='#')
        {
            break;
        }
        else
        {
            cnt++;
        }
        
    }
    //cout << "TEST " << cnt << endl;
    for(ll i=p+1;i<=n;i++)
    {
        if(arr[i][q]=='#')
        {
            break;
        }
        else
        {
            cnt++;
        }
        
    }
    //cout << "TEST " << cnt << endl;
    for(ll i=p-1;i>=1;i--)
    {
        if(arr[i][q]=='#')
        {
            break;
        }
        else
        {
            cnt++;
        }
        
    }
    cout << cnt << endl;

}
