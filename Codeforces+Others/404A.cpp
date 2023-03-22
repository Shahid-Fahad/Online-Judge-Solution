///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,i,j,u;
    char x,y;
    cin >> n;
    u = n/2;
    char arr[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    y = arr[0][1];
    x = arr[0][0];
    for(i=0; i<n; i++)
    {
        if(arr[i][i]==x)
            arr[i][i]='1';
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    arr[u][u]=x;
    x = arr[0][n-1];
    for(i=0,j=n-1; i<n; i++,j--)
    {
            if(arr[i][j]==x)
            {
                arr[i][j]='1';
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }

    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i][j]=='1')
                continue;
           else if(arr[i][j]==x||arr[i][j]!=y)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
}
