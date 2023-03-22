#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,j,i,pd=0,sd=0;
    cin >> n;
   int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin >> arr[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                if(i==j)
                   pd  = pd + arr[i][j];
            }
    }
    for(i=0,j=n-1;i<n;i++,j--)
    {
        sd = sd+arr[i][j];
    }
    cout << abs(pd-sd) <<endl;

    return 0;
}

