#include<bits/stdc++.h>
using namespace std;
int arr[256][256];
int main()
{
    int n,i,j,sum;
    char c;
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> c;
            if(c=='o')
                arr[i][j]=1;
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {

            sum = arr[i][j+1] + arr[i][j-1] + arr[i-1][j] + arr[i+1][j];
            if(sum%2==1)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
}
