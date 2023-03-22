#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,y,n;
    cin >> n >> x >> y;
    x--,y--;
    if(x>y)
        swap(x,y);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==x)
            swap(arr[y][j],arr[x][j]);

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==y)
            swap(arr[i][x],arr[i][y]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
