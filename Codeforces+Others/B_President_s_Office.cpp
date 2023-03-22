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
    char c;
    cin >> n >> m  >> c;
    char arr[n][m];
    set<char>s;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(arr[i][j]==c)
            {
                if(j!=m-1&&arr[i][j+1]!='.'&&arr[i][j+1]!=c)
                s.insert(arr[i][j+1]);
                 if(i!=n-1&&arr[i+1][j]!='.'&&arr[i+1][j]!=c)
                s.insert(arr[i+1][j]);
                 if(j!=0&&arr[i][j-1]!='.'&&arr[i][j-1]!=c)
                s.insert(arr[i][j-1]);
                 if(i!=0&&arr[i-1][j]!='.'&&arr[i-1][j]!=c)
                s.insert(arr[i-1][j]);
            }
        }
    }
    cout << s.size()  << endl;

}
